int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {
    k = k % a_count;
    
    for (int i = 0; i < queries_count; i++) {
        int index = (queries[i] - k + a_count) % a_count;
        queries[i] = a[index];
    }

    *result_count = queries_count;

    return queries;
}
