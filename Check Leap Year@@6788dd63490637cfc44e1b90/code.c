#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%4==0){
        printf("Leap year\n");
    }else 
    printf("Not a leap year\n");
    return 0;
}