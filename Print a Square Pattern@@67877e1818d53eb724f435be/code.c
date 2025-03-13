#include <stdio.h>

int main() {
    int N, i, j;

    scanf("%d", &N);

    // Loop to print the square pattern
    for (i = 1; i <= N; i++) {  // Rows
        for (j = 1; j <= N; j++) {  // Columns
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
