int saveThePrisoner(int n, int m, int s) {
    long index = (m + s - 1) % n;
    if (index == 0) return n;
    else return index;
}
