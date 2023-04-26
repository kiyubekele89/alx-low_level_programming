
# 0x00-hell_world

This is the first project of the alx software engineering program. It introduces the basics of C programming language, such as compilation, preprocessing, assembly, linking, and executable files.

## Learning objectives

By the end of this project, you are expected to be able to:

- Explain what each step of compilation does
- Write your first C programs using printf and puts functions
- Use gcc flags to compile your code with warnings and debug information
- Use betty-style to check and format your code
- Use shell scripts to automate tasks

## Requirements

- Ubuntu 20.04 LTS
- gcc 9.3.0
- betty-style 0.7.0

## Files

The following files are part of this project:

| File | Description |
| ---- | ----------- |
| 0-preprocessor | A script that runs a C file through the preprocessor and saves the result into another file |
| 1-compiler | A script that compiles a C file but does not link |
| 2-assembler | A script that generates the assembly code of a C file and saves it in an output file |
| 3-name | A script that compiles a C file and creates an executable named cisfun |
| 4-puts.c | A C program that prints exactly \"Programming is like building a multilingual puzzle\", followed by a new line |
| 5-printf.c | A C program that prints exactly \"with proper grammar, but the outcome is a piece of art\", followed by a new line |
| 6-size.c | A C program that prints the size of various types on the computer it is compiled and run on |
| 100-intel | A script that generates the assembly code (Intel syntax) of a C file and saves it in an output file |
| 101-quote.c | A C program that prints exactly \"and that piece of art is useful\" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error |

## How to use

To use this project, you need to clone this repository and compile the C files with gcc using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output>
Then you can run the executable files with ./<output>.

You can also run the shell scripts with ./<scriptname>.

To check your code style and format, you can use betty-style with betty <filename.c>.

Author
This project was created by Eyarios Bekele for alx software engineering program.
