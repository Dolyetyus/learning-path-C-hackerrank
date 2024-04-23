int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    *result_count = arr_count;
    int *res = malloc(arr_count * sizeof(int));

    for (int i = 0; i < arr_count; i++) {
        int newPos = (i + arr_count - d) % arr_count;
        res[newPos] = arr[i];
    }

    return res;
}
