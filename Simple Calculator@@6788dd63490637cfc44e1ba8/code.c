#include <stdio.h>
int main(){
    int num1,num2;
    char opr;
    scanf("%d %d %c",&num1,&num2,&opr);

    switch(oper){
        case'+':
        printf("%d" ,num1+num2);
        break;

        case'-':
        printf("%d" ,num1-num2);
        break;

        case'*':
        printf("%d" ,num1*num2);
        break;

        case'/':
        if(num2 != 0)
        printf("%d",num1/num2);
        else 
        printf("error");
        break;
        default:
        printf("error");
    }
    return 0;
        
}
