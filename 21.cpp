#include <stdio.h>

int main() {
    int a = 20, b = 35;

    printf("a > 10 && b > 30 : %d\n", (a > 10 && b > 30));
    printf("a > 30 || b > 30 : %d\n", (a > 30 || b > 30));
    printf("!(a > b)         : %d\n", !(a > b));

    return 0;
}