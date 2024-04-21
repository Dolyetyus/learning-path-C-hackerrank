int formingMagicSquare(int s_rows, int s_columns, int** s) {
    int cost = 999999;
    int idx = 0;
    int flattened[9];
    int possible_solutions[8][9] = {
        {8,3,4,1,5,9,6,7,2},
        {4,3,8,9,5,1,2,7,6},
        {8,1,6,3,5,7,4,9,2},
        {6,1,8,7,5,3,2,9,4},
        {2,9,4,7,5,3,6,1,8},
        {4,9,2,3,5,7,8,1,6},
        {2,7,6,9,5,1,4,3,8},
        {6,7,2,1,5,9,8,3,4}};
    
    for (int i = 0; i<s_columns; i++){
        for (int ii = 0; ii<s_columns; ii++){
            flattened[idx] = s[i][ii];
            idx++;
        }
    }
    
    for (int i = 0; i<8; i++){
        int temp_cost = 0;
        for (int ii = 0; ii<9; ii++){
            int diff = flattened[ii] - possible_solutions[i][ii];
            temp_cost += abs(diff);
        }
        if (temp_cost<cost) cost=temp_cost;
    }
    
    return cost;
}
