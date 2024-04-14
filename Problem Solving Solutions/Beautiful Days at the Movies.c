int beautifulDays(int i, int j, int k) {
    int ret = 0;
    for (; i<=j; i++){
        int remainder, reverse = 0;
        int temp = i;
        
        while (temp != 0) {
            remainder = temp%10;
            reverse = reverse*10 + remainder;
            temp/=10;
        }
        
        if ((i-reverse)%k == 0) ret++;
    }
    return ret;
}
