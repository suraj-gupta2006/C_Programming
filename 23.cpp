#include <stdio.h>

int main() {
    int a = 5;

    printf("Original value of a = %d\n", a);

    printf("a++ = %d\n", a++);  // post increment
    printf("After a++ = %d\n", a);

    printf("a-- = %d\n", a--);  // post decrement
    printf("After a-- = %d\n", a);

    return 0;
}