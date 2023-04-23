#include <stdio.h>
#include <stdarg.h>

int print_m(int a, int b)
{
	


}

int print_c(char c)
{


}

int print_s(const char *str)
{


}

int my_printf(const char *format, ...) {
    va_list args = {c, s, %};
    va_start(args, format);
    int count = 0;
    const char *p = format;
    while (*p) {
        if (*p == '%') {
            // Ignore any formatting options and just print the string
            putchar(*(++p));
        } else {
            putchar(*p);
        }
        ++p;
        ++count;
    }
    va_end(args);
    return count;
}

int main() {
    my_printf("Hello, %s!\n", "world");
    return 0;
}

