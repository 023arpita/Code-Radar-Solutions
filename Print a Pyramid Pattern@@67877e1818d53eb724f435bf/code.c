#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);

    // Loop to print pyramid pattern
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
