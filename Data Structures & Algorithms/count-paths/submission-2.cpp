class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        grid[m-1][n-1] = 1;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                dfs(grid,m,n,i,j);
            }
        }
        return grid[0][0];

    }
    int dfs(vector<vector<int>>& grid,int m,int n,int i, int j){
        if(i < 0 || i >= m || j < 0 || j >= n){
            return 0;
        }
        if(grid[i][j] != 0){
            return grid[i][j];
        }
        grid[i][j] = dfs(grid,m,n,i+1,j) + dfs(grid,m,n,i,j + 1);
        return grid[i][j];
    }
};
