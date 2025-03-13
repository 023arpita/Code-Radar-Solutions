#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);

    // Checking leap year conditions
    if (year % 400 == 0) {
        printf("Leap Year\n");
    } 
    else if (year % 100 == 0) {
        printf("NOT a Leap Year\n");
    } 
    else if (year % 4 == 0) {
        printf("Leap Year\n");
    } 
    else {
        printf("NOT a Leap Year\n");
    }

    return 0;
}
