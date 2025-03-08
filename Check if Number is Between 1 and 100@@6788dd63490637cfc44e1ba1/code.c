#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>=1 && num<=100){
        printf("In Range");
    }else if(num==0 && num>100){
        printf("Out of Range");
    }
    return 0;
}