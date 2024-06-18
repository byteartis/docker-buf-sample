#!/bin/bash

create_init_files() {
    local root_dir="$1"
    find "$root_dir" -type d | while read -r dir; do
        if [ ! -f "$dir/__init__.py" ]; then
            touch "$dir/__init__.py"
        fi
    done
}

generate_dir="gen/python"
create_init_files "$generate_dir"
