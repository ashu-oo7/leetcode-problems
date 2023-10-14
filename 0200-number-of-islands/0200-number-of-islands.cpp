class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& grid){
        int m = grid.size(),n = grid[0].size();
        if(i< 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')return;
        grid[i][j] = '0';
        int x[4] = {0,1,0,-1};
        int y[4] = {1,0,-1,0};
        for(int p = 0;p<4;p++){
            int ni = i + x[p];
            int nj = j + y[p];
            dfs(ni,nj,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(grid[i][j] == '1'){
                    dfs(i,j,grid);
                    count++;
                }
            }
        }
        return count;
    }
};