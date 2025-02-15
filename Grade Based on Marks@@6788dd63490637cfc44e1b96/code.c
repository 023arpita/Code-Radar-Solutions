#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);


    if (marks >= 90 && marks <= 100) {
        printf("A\n");
    } 
    else if (marks >= 80) {
        printf(" B\n");
    } 
    else if (marks >= 70) {
        printf("C\n");
    } 
    else if (marks >= 60) {
        printf("D\n");
    } 
    else if (marks >= 50) {
        printf("E\n");
    } 
    else (marks >= 0) {
        printf("F\n");
    } 

    return 0;
}
