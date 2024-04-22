int jumpingOnClouds(int c_count, int* c) {
    int jumps = 0;
    for (int i = 0; i<c_count-1; i+=2){
        jumps++;
        if (c[i]==1){
            i--;
        }
    }
    return jumps;
}
