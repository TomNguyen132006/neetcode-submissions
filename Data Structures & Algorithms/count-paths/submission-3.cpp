class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> row(n,1);
        for(int i = 0; i < m-1; i++){
            vector<int> nrow(n,1);
            for(int j = n-2; j>=0; j--){
                nrow[j] = nrow[j+1] + row[j];
            }
            row = nrow;
        }
        return row[0];
    }
};
