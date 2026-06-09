#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("a = %d\n", a);

    a += b;
    printf("a += b : %d\n", a);

    a = 10;   // reset value
    a -= b;
    printf("a -= b : %d\n", a);

    a = 10;
    a *= b;
    printf("a *= b : %d\n", a);

    a = 10;
    a /= b;
    printf("a /= b : %d\n", a);

    a = 10;
    a %= b;
    printf("a %%= b : %d\n", a);

    return 0;
}