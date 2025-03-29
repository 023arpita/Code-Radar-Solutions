#include <stdio.h>

void defalteBalloons(int air[], int n ) {
    while(1){
        int minAir = 10001;
        int count = 0;
        for(int i=0 ; i<n ; i++) {
            if(air[i]>0 && air[i]< minAir) {
                minAir = air[i];
            }
        }
        if (minAir == 10001) break;

        for (int i = 0; i < n ; i++){
            if (air[i]>0){
                air[i] -= minAir;
                count++;
            }
        }

        printf("%d\n" , count);

    }
}
int main(){
    int n;
    scanf("%d",&n);

    int air[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &air[i]);
    } 
    defalteBalloons(air,n);
    return 0;
}