#!/usr/bin/env sh

command_name=quine
sources=(quine.c)
install_dir="$HOME/.local/bin/$command_name"

cc -march=native -Ofast -g0 -o $command_name $sources && cp "./$command_name" $install_dir
echo "Success"
