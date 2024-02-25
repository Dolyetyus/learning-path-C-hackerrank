#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    int *new_arr = (int*) malloc(num * sizeof(int));;
    int id = 0;
    
    for(int i=num-1; i>=0; i--){
        new_arr[id] = arr[i];
        id++;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(new_arr + i));
    return 0;
}
