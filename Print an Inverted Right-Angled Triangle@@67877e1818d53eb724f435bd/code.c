#include <stdio.h>

int main() {
    int N;

    // Input from user
    
    scanf("%d", &N);

    // Loop for rows
    for (int i = N; i >= 1; i--) {
        // Loop for printing stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
