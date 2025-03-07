#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        
        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        
        else if (a == b || a == c || b == c) {
            printf("Isosceles\n");
        }
        
        else {
            printf("Scalene\n");
        }
    } 

    return 0;
}
