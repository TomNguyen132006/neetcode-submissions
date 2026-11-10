class Solution:
    def uniquePaths(self, m: int, n: int) -> int:

        grid = [[0] * n for _ in range(m)]
        grid[m-1][n-1] = 1
        def dfs(grid,i,j):
            if i >= m or i < 0 or j < 0 or j >= n:
                return 0
            if grid[i][j]!= 0:
                return grid[i][j]
            grid[i][j] = dfs(grid,i+1,j) + dfs(grid, i, j+1)
            return grid[i][j]
        for i in range(m - 1, -1, -1):
            for j in range(n - 1, -1 , -1):
                dfs(grid,i,j)
        return grid[0][0]