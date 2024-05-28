char* superReducedString(char* s) {
    int end = 0;
    int size = strlen(s);
    
    for (int i = 0; i<size-1; i++){
        if (s[i]==s[i+1]){
            memmove(&s[i], &s[i + 2], size - i - 1);
            end = 1;
            size -= 2;
        }
    }
    
    if (end) return superReducedString(s);
    if (size == 0) return "Empty String";
    return s;
}
