# libft
My take at C Standard library functions

## Overview

This project is a part of the curriculum at School 42 and aims to reproduce some of the functions from the C standard library (libc). The goal is to deepen understanding of how these functions work internally and improve programming skills in C. 

## Contents

In this repository, you will find implementations of various functions commonly found in libc, such as `strcpy`, `strlen`, `strcmp`, `atoi`, `bzero`, and more. Each function is carefully implemented to closely mimic the behavior and functionality of its counterpart in the standard library. There are also some functions that are either not in the libc, or that are part of it but in a different form, like `split`, `itoa`, `strtrim`, `substr`, and `strjoin`.

## How to Use

To compile the source files and generate the static library `libft.a`, run the command `make`. Then, link this library to your project during compilation. For example: `cc your_project.c libft/libft.a -o your_project`. Detailed descriptions for each function can be found in the comments within the corresponding source files.

