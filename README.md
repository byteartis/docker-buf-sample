# docker-buf-sample

Sample project using [byteartis/docker-buf](https://github.com/byteartis/docker-buf) to compile protobuf definitions into multiple languages.

This is not an exhaustive example, but a simple one to show how to use the docker image to compile protobuf definitions into different languages.

You can then package and distribute the generated code as you see fit depending on the specificities of each language.

## Commands

In the Makefile you can run the following commands:

- `make lint`: runs the buf linter on the current protobuf definitions as specified in the `buf.yaml` file
- `make breaking`: uses buf to detect if there are any breaking changes to the definitions when compared with the main GH branch
- `make gen`: generates the protobuf definitions into the languages specified in the `buf.gen.yaml` file
