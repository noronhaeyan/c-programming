#include <stdio.h>

int main() {
    int a = 999;

    // %zu is the format specifier for type size_t

    size_t t1 = sizeof(a);      // size_t is an unsigned integer type
    size_t t2 = sizeof(2 + 7);  // size_t is an unsigned integer type
    size_t t3 = sizeof(3.14);   // size_t is an unsigned integer type

    printf("%zu\n", t1);      // Prints 4 on my system
    printf("%zu\n", t2);  // Prints 4 on my system
    printf("%zu\n", t3);   // Prints 8 on my system

    // If you need to print out negative size_t values, use %zd
}