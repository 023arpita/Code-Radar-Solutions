#include <stdio.h>

int main() {
    int a, b;

    printf("Two integers: ");
    scanf("%d %d", &a, &b);

    printf(" a = %d and  b = %d\n", a, b);


    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf(" a = %d, b = %d\n", a, b);

    return 0;
}
