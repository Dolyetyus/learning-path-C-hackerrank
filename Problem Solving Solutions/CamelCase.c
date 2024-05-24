int camelcase(char* s) {
    int ret = 1;
    
    for (int i = 0; i<strlen(s); i++){
        if (isupper(s[i])) ret++;
    }
    
    return ret;
}
