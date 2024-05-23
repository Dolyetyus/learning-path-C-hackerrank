int introTutorial(int V, int arr_count, int* arr) {
    for (int i = 0; i<arr_count; i++){
        if (V==arr[i]){
            return i;
        }
    }
    return 0;
}
