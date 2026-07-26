class Solution {
public:
    void bfs( int i, int j , vector<vector<char>>& grid , vector<vector<int>>& vis ){
        vis[i][j] = 1;
        queue<pair<int,int>> q;
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,1,0,-1};
        int n = grid.size();
        int m = grid[0].size();
        
        q.push({i,j});
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i =0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col + delcol[i];
                if(nrow<n && nrow >=0 && ncol<m && ncol>=0 && grid[nrow][ncol]=='1'){
                    if(vis[nrow][ncol]!=1){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
            }
            
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int count = 0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    bfs(i,j,grid, vis );
                    count++;
                }
            }
        }
        return count;

    }
};
