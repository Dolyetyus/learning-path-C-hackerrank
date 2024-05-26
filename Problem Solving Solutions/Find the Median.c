int compare_function(const void *a,const void *b) {
    int *x = (int *) a;
    int *y = (int *) b;
    return *x - *y;
}

int findMedian(int arr_count, int* arr) {
    qsort(arr, arr_count, sizeof(int), compare_function);
    return arr[arr_count/2];
}
