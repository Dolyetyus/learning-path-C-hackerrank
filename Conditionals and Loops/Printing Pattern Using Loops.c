#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printpattern(int n){
    char matrix[n*2-1][n*2-1];
    int k;
    
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            printf("%d ", (i < j ? j : i));
        }
        for (int j = 2; j <= n; j++) {
            printf("%d ", (i < j ? j : i));
        }
        printf("\n");
    }

    for (int i = 2; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            printf("%d ", (i < j ? j : i));
        }
        for (int j = 2; j <= n; j++) {
            printf("%d ", (i < j ? j : i));
        }
        printf("\n");
    }
}

int main() 
{

    int n;
    scanf("%d", &n);
  	printpattern(n);
    return 0;
}
