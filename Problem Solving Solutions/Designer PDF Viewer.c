int designerPdfViewer(int h_count, int* h, char* word) {
    int max = 0;
    int size = strlen(word);
    
    for (int i = 0; i<size; i++){
        int id = word[i] - 97;
        if (h[id]>max) max = h[id];
    }
    
    return size*max;
}
