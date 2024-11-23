# Printf function:

<blockquote style="color: blue;"> This is a custom implementation of the `printf` function in C that supports various format specifiers. 
 The function writes output directly to the standard output using `write`.
The function returns the number of characters printed (similar to the standard printf).</blockquote> 

## Project File Structure

| File Name       | Description                                                                  |
|-----------------|------------------------------------------------------------------------------|
| `main.h`        | Header file that contains function prototypes and necessary includes.        |
| `charactrs.c`   | Functions that handle printing characters, strings, and non-printable characters. |
| `number.c`      | Functions that handle printing numbers in decimal format.                    |
| `number_base.c` | Functions that print numbers in different bases (binary, octal, uppercase hexadecimal, and lowercase hexadecimal). |
| `pointers.c`    | Functions that handle printing pointer addresses, Rot13 encoding, and reversed strings. |
| `printf.c`      | The main `_printf` function that mimics the behavior of `printf` (under 40 lines). |
| `printf_merv.c` | A more extended version of `_printf` (over 40 lines, with a slightly different function prototype). |
| `test/main.c`   | The main function used to test the implemented printf function.               |


## Case List
- [x] Case 1: Handling %c: Character
- [x] Case 2: Handling %s: String of characters
- [x] Case 3: Handling %d or %i: Signed decimal integer
- [x] Case 4: Handling %b: Unsigned binary
- [x] Case 5: Handling %u: Unsigned decimal integer
- [x] Case 6: Handling %o: Unsigned octal
- [x] Case 7: Handling %x: Unsigned hexadecimal integer (lowercase)
- [x] Case 8: Handling %X: Unsigned hexadecimal integer (uppercase)
- [x] Case 9: Handling %S: Custom conversion specifier
- [x] Case 10: Handling %p: Pointer address
- [x] Case 11: Handling %r: Custom conversion specifier, reversed string.
- [x] Case 12: Handling %R: Custom conversion specifier, Rot13'ed string.

## How to Use
 Include the header file that declares _printf__  and the relevant specifier functions (if implemented in separate files).
Link the object files that contain the implementation of your printf function.
Call _printf__ with the desired format string and arguments.
compile it this way : __gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

