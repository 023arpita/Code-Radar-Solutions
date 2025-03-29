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
