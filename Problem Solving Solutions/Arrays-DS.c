int* reverseArray(int a_count, int* a, int* result_count) {
    for (int i = 0; i<a_count/2; i++){
        int temp = a[a_count-i-1];
        a[a_count-i-1] = a[i];
        a[i] = temp;
    }
    
    *result_count = a_count;
    return a;
}
