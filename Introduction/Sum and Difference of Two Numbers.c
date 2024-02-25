#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a, b;
    float x, y;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    scanf("%f", &x);
    scanf("%f", &y);
    
    printf("%d %d\n", a+b, a-b);
    printf("%0.1f %0.1f", x+y, x-y);
    
    return 0;
}
