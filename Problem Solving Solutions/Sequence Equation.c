int* permutationEquation(int p_count, int* p, int* result_count) {
    *result_count = p_count;
    int *res = malloc(p_count * sizeof(int));

    for (int x = 1; x <= p_count; x++) {
        int y;
        for (int i = 0; i < p_count; i++) {
            if (p[i] == x) {
                y = i + 1;
                break;
            }
        }
        for (int i = 0; i < p_count; i++) {
            if (p[i] == y) {
                res[x - 1] = i + 1;
                break;
            }
        }
    }

    return res;
}
