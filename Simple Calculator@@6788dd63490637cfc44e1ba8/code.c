#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result1,result2,result3,result4;
    scanf(" %c", &operator); 
    scanf("%d %d", &num1, &num2);
    switch (operator) {
        case '+':
            result1 = num1 + num2;
            printf("%d\n", result1);
            break;
        case '-':
            result2 = num1 - num2;
            printf("%d\n", result2);
            break;
        case '*':
            result3 = num1 * num2;
            printf("%d\n", result3);
            break;
        case '/':
            if (num2 != 0) {
                result4 = num1 / num2;
                printf("%d\n", result4);
            } else {
                printf("error\n");
            }
            break;
        
    }

    return 0;
}
