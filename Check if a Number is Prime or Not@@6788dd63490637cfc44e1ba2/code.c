#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<0){
        printf("Not Prime");
    }else if(num%1==0 && num%num==1){
        printf("Prime");
    } 
    return  0;

}