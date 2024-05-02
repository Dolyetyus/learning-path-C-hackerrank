int jumpingOnClouds(int c_count, int* c, int k) {
    int e = 100, i = 0;
    bool entered = true;
    while (i!=0 || entered){
        entered = false;
        i = (i+k)%c_count;
        e--;
        if (c[i] == 1) e-=2;
    }
    return e;
}
