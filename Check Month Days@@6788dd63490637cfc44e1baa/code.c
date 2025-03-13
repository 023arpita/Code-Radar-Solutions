#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch (a) { 
    // Cases for 31 Days 
    case 1: 
    case 3: 
    case 5: 
    case 7: 
    case 8: 
    case 10: 
    case 12: 
        printf("31"); 
        break; 
  
    // Cases for 30 Days 
    case 4: 
    case 6: 
    case 9: 
    case 11: 
        printf("30"); 
        break; 
  
    // Case for 28/29 Days 
    case 2: 
        printf("28"); 
        break; 
  
    default: 
        printf("Invalid month."); 
        break; }

}