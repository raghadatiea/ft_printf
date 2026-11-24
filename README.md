*This project has been created as part of the 42 curriculum by ratieh.*

# ft_printf

## Description

`ft_printf` is a project from the 42 curriculum that consists of recreating the behavior of the standard C `printf()` function.

The main goal of this project is to learn how to handle variadic functions in C, manage different data types, and format output using a custom implementation.

The `ft_printf()` function prints formatted data to the standard output and returns the total number of characters printed, excluding the null terminator.

The project supports the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a signed decimal integer. |
| `%i` | Prints an integer in decimal format. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints a number in lowercase hexadecimal. |
| `%X` | Prints a number in uppercase hexadecimal. |
| `%%` | Prints the percent character. |

## Algorithm and Data Structure

### Algorithm

The `ft_printf()` function processes the format string character by character using a loop.

- If the current character is not `%`, it is printed directly using `write()`, and the character count is incremented.
- If the current character is `%`, the next character is read to identify the requested conversion.
- The conversion is passed to `ft_handle_format()`, which identifies the conversion type and retrieves the corresponding argument using `va_arg()`.
- The appropriate printing function is called to handle the conversion.
- Each printing function returns the number of characters it prints, which is added to the total count.
- After processing the entire format string, `ft_printf()` returns the total number of characters printed.

### Data Structures

The project uses the following data structures and mechanisms:

- **`va_list`:** Used to access the variable arguments passed to `ft_printf()`.
- **Character arrays:** Used in number-conversion functions to temporarily store digits in reverse order before printing them in the correct order.
- **Pointers:** Used to access strings and handle pointer addresses.

## Instructions

### Compilation

To compile the project manually:

```bash
cc -Wall -Wextra -Werror main.c ft_printf.c ft_handle_format.c ft_print_char.c ft_print_string.c ft_print_number.c ft_print_unsigned.c ft_print_hex.c ft_print_pointer.c -o test
```

### Execution

Run the executable:

```bash
./test
```

### Building the Library

Once the Makefile is available, the project can be compiled using:

```bash
make
```

The Makefile is intended to generate the static library `libftprintf.a`.

## Resources

### Documentation

- [Linux man pages - printf](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Linux man pages - write](https://man7.org/linux/man-pages/man2/write.2.html)
- [C documentation - stdarg.h](https://en.cppreference.com/w/c/variadic.html)
- [C documentation - Integer types](https://en.cppreference.com/w/c/language/arithmetic_types.html)

### AI Usage

AI was used as a learning assistant during the development of this project.

It was used to:

- Explain variadic functions and the use of `va_list`, `va_start`, `va_arg`, and `va_end`.
- Help understand number conversion algorithms and hexadecimal representation.
- Assist in debugging compilation errors and identifying potential issues.
- Suggest test cases and explain their expected results.
- Explain the purpose and structure of individual functions.

The implementation was written and tested by the author. AI assistance was used for explanations, debugging guidance, and learning support.

## Author

ratieh