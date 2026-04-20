class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        pre.assign(row+1, vector<int> (col+1, 0));

        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                pre[i][j] = pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1] + matrix[i-1][j-1];
            }
        }

    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        row2++;
        col1++;
        col2++;
        return pre[row2][col2] - pre[row2][col1-1] - pre[row1-1][col2] + pre[row1-1][col1-1];
    }

private:
    vector<vector<int>> pre;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */