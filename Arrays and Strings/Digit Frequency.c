#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    int digits[10] = {0};
    char str[1000];
    
    scanf("%s", str);
    
    for (int i = 0; i<strlen(str); i++){
        if (isdigit(str[i])){
            digits[str[i]-'0']++;
        }
    }
    
    for (int i = 0; i<10; i++){
        printf("%d ", digits[i]);
    }
    
    return 0;
}
