int utopianTree(int n) {
    int height = 0;
    int i = 1;
    while (i<=n+1){
        if (i%2==1) height++;
        else height*=2;
        i++;
    }
    
    return height;
}
