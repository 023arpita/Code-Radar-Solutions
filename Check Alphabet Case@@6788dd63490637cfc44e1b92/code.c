#include <stdio.h>
int main(){
    scanf("%c",&c);
    if(c>='A'&&c<='Z');{
        printf("Uppercase\n");

    }else if(c>='a'&&c<='z'){
        printf("Lowercase\n");
    }else 
    printf("Not an alphabet\n");
    return 0;
    
}