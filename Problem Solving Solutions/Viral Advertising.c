int viralAdvertising(int n) {
    int reaches = 5, likes = 0, ret = 0;
    
    for(int i = 0; i<n; i++){
        likes = reaches/2;
        reaches = 3*likes;
        ret+=likes;
    }
    
    return ret;
}
