# 0x00 C Hello World

In this project, I will explore the basics of C programming

## What each scripts do?

* 0-preprocessor: runs a C file through the preprocessor and save the result into another file
* 1-compiler: compiles a C file but does not link.
  * The C file name will be saved in the variable $CFILE
  * The output file should be named the same as the C file, but with the extension .o instead of .c.
    * Example: if the C file is main.c, the output file should be main.o
* 2-assembler: generates the assembly code of a C code and save it in an output file
  * The C file name will be saved in the variable $CFILE
  * The output file should be named the same as the C file, but with the extension .s instead of .c.
    * Example: if the C file is main.c, the output file should be main.s
* 3-name: compiles a C file and creates an executable named `cisfun`
* 4-puts.c: prints exactly `"Programming is like building a multilingual puzzle` followed by a new line
  * Use the function `puts`
* 5-printf.c: Prints exactly `with proper grammar, but the outcome is a piece of art`, followed by a new line.
  * Use the function `printf`
  * Not allowed to use the function `puts`
  * Program should return `0`
  * program should compile without warning when using the `-Wall` gcc option
* 6-size.c: prints the size of various types on the computer it is compiled and run on
  * Warnings are allowed
  * program should return `0`

## License

None.