void insertionSort1(int n, int arr_count, int* arr) {
    /*
    for (int i = 0; i<arr_count-1; i++){
        if (arr[i]>arr[i+1]){
            int temp = arr[i];
            for (int ii = 0; ii<arr_count-1; ii++){
                if (temp<=arr[ii+1]){
                    for (int iii = ii+1; iii<arr_count-1; iii++){
                        int relocate = arr[ii+1];
                        arr[ii+1] = temp;
                    }
                }
            }
        }
    }*/
    
    for (int i = 1; i < arr_count; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            for (int i = 0; i<arr_count; i++) printf("%d ", arr[i]);
        printf("\n");
        }
        arr[j + 1] = key;
    }
    
    for (int i = 0; i<arr_count; i++) printf("%d ", arr[i]);
    printf("\n");
}
