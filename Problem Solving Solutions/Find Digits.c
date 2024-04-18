int findDigits(int n) {
    int ret = 0;
    int num = n;
    int div = 0;
    
    while (num>0){
        div = num%10;
        num = num/10;
        if (div==0) continue;
        if (n%div==0) ret++;
    }
    
    return ret;
}
