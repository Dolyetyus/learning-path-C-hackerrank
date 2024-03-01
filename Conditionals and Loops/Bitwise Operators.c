#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k){
    int aand = 0, oor = 0, xor = 0;

    for (int i=1; i<n+1; i++){
        for (int j=i+1; j<n+1; j++){
            if (((i&j) > aand) && ((i&j) < k)){
                aand = i&j;
            }
            if (((i|j) > oor) && ((i|j) < k)){
                oor = i|j;
            }
            if (((i^j) > xor) && ((i^j) < k)){
                xor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n", aand, oor, xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
