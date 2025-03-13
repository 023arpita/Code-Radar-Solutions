#include <stdio.h>

int main() {
    int N;
    
    // Input from user
    
    scanf("%d", &N);

    // Loop to print the right-angled triangle
    for (int i = 1; i <= N; i++) {  // Rows
        for (int j = 1; j <= i; j++) {  // Columns
            printf("* " );
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
