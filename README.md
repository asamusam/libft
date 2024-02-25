# libft
My take at C Standard library functions

## Overview

This project is a part of the curriculum at School 42 and aims to reproduce some of the functions from the C standard library (libc). The goal is to deepen understanding of how these functions work internally and improve programming skills in C.

## Contents

In this repository, you will find implementations of various functions commonly found in libc, such as `strcpy`, `strlen`, `strcmp`, `atoi`, `bzero`, `printf`, and more. Each function is carefully implemented to closely mimic the behavior and functionality of its counterpart in the standard library. There are also some functions that are either not in the libc, or that are part of it but in a different form, like `split`, `itoa`, `strtrim`, `substr`, `strjoin`, and `getline`.

All of the functions have prefix `ft_` so that they are not confused with the original ones.

## How to Use

To compile the source files and generate the static library `libft.a`, run the command `make`. Then, link this library to your project during compilation. For example: `cc your_project.c libft/libft.a -o your_project`. Detailed descriptions for each function can be found in the comments within the corresponding source files.

## Limitations

It's important to note that the implementations provided here are primarily for educational purposes. As such, they may not be as optimized or thoroughly tested as the original libc functions. Therefore, it's recommended to use the original libc functions for production-level code in your projects.
