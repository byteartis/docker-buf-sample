#!/bin/sh

find gen/ -mindepth 1 -maxdepth 1 -type d -not -name '.gitignore' | xargs rm -rf
