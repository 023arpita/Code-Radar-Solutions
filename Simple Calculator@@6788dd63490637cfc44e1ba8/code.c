#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;
    scanf(" %c", &operator); 
    scanf("%d %d", &num1, &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("error\n");
            }
            break;
        default:
            printf("error\n");
    }

    return 0;
}
