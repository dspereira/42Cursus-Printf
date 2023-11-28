# 42Cursus-Printf

This project is part of the 42Lisboa curriculum and aims to implement the `printf` function in C. The `printf` function is a widely used function in the C standard library that allows for formatted output printing. It takes a format string as input, which contains format specifiers, flags, and other modifiers, and prints formatted output accordingly.

The main goal of this project is to learn how the `printf` function works and especially to learn how to implement variadic functions in C, which is a fundamental part of how `printf` works.

## Available Format Specifiers

- %c print a single character.
- %s print a string of characters.
- %p The void * pointer argument is printed in hexadecimal.
- %d print a decimal (base 10) number.
- %i print an integer in base 10.
- %u print an unsigned decimal (base 10) number.
- %x print a number in hexadecimal (base 16), with lowercase.
- %X print a number in hexadecimal (base 16), with uppercase.
- %% print a percent sign.

## Installation / Usage

This simple example works on linux and MacOs.

Clone repo inside the folder of your project:
```shell
git clone https://github.com/dspereira/42Cursus-Printf.git ft_printf
```

Build:
```shell
make -C ./ft_printf
```
Usage:
```C
#include "ft_printf/ft_printf.h"

int main(void)
{
    ft_printf("hello %s\n", "ft_printf");
    return (0);
}

```
Compile:
```shell
gcc main.c ft_printf/libftprintf.a -o example
```

Run:
```shell
./example
```
## License

This project is licensed under the [MIT License](https://github.com/dspereira/42Cursus-Printf/blob/main/License.md).

## Contact

If you have any questions or comments about this project, please feel free to contact me at diogo.s.pereira@outlook.pt.
