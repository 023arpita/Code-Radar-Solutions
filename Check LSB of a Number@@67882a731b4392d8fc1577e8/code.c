#include <stdio.h>
int main(){
    int a;
    scanf("%d %d",&a);
    if (a&1){
        printf("set");
    }else
    printf("Not Set");
    return 0;
}