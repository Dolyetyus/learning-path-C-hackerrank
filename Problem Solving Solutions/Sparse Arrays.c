int* matchingStrings(int stringList_count, char** stringList, int queries_count, char** queries, int* result_count) {
    *result_count = queries_count;
    int* ret = malloc(queries_count*sizeof(int));
    
    for (int i = 0; i<queries_count; i++){
        int count = 0;
        char* compare = queries[i];
        for (int ii = 0; ii<stringList_count; ii++){
            char* str = stringList[ii];
            if (strcmp(compare, str)==0) count++;
        }
        ret[i] = count;
    }

    return ret;
}
