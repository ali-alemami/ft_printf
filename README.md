*This project has been created as part of the 42 curriculum by aalemami.*

# ft_printf

---

ft_printf is a custom implementation of the C standard library function `printf`. It handles the following format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`. The function is compiled into a static library `libftprintf.a`.

## Instructions

### Compilation

```sh
make        # Build libftprintf.a
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Rebuild from scratch
```

### Usage

Include the header and link the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, you are %d years old!\n", "world", 42);
    return (0);
}
```

Compile with:

```sh
cc main.c -L. -lftprintf -o my_program
```

## Algorithm & Data Structure

The implementation uses a simple linear scan of the format string. When a `%` character is encountered, the next character is checked against a list of valid specifiers. A variadic argument list (`va_list`) is used to retrieve arguments matching each specifier.

- **Integer printing** (`%d`, `%i`, `%u`): Recursive digit extraction via division by 10.
- **Hexadecimal printing** (`%x`, `%X`, `%p`): Recursive digit extraction via division by 16, using a lookup string for digit-to-character mapping.
- **String/char printing** (`%s`, `%c`): Direct `write` syscall.

No dynamic memory allocation is used. All output is performed via the `write` system call, and a running total of bytes written is maintained to return the final count.

## Resources

- [printf(3) man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C](https://en.cppreference.com/w/c/variadic)
- AI was not used in the development of this project.