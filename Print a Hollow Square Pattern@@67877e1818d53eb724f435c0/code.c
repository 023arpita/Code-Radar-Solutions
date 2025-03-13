#include <stdio.h>

int main() {
    int n, i, j;

    // Input from user
    
    scanf("%d", &n);

    // Loop to print the hollow square
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            // Print '*' for the border, space for the inside
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf("  ");
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
