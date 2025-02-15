.DEFAULT_GOAL := gen

## Function to wrap docker run commands
## $1 - command to run
## $2 - extra run options
define docker_run
	@docker run $(2) \
		--rm \
    -v $(shell pwd):/proto \
		byteartis/buf:latest \
		$(1)
endef

## Lint protobuf files
lint:
	@echo "Linting protobuf files..."
	@$(call docker_run, lint, -w /proto/defs)

## Detect breaking changes in protobuf files
comma := ,
breaking:
	@echo "Detecting breaking changes in protobuf files..."
	@$(call docker_run, breaking -v --against ../.git\#branch=main$(comma)subdir=defs, -w /proto/defs)

## Clean generated proto files
clean:
	@echo "Cleaning generated proto files..."
	@$(call docker_run, , -w /proto --entrypoint=/proto/scripts/clean.sh)

## Generate proto files
gen: clean
	@echo "Generate proto files..."
	@$(call docker_run, generate, -w /proto/defs)
	@$(call docker_run, , -w /proto --entrypoint=/proto/scripts/add_init.sh)
