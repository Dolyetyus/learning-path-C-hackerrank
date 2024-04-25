int squares(int a, int b) {
    int ret = 0;
    int start = ceil(sqrt(a));
    int end = floor(sqrt(b));

    for (int i = start; i <= end; i++) {
        int square = i * i;
        if (square >= a && square <= b) {
            ret++;
        }
    }

    return ret;
}
