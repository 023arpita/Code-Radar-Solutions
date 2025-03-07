#include <stdio.h>
int main(){
    int CP , SP ;
    scanf("%d %d" , &CP , &SP);
    if (CP>SP){
        printf("Loss\n");
    }else if (SP>CP){
        printf("Profit\n");
    }else {
        printf("No Profit No Loss\n");
    }
    return 0;
}