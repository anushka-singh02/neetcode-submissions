class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char,int> mppr;
        //every row
        for(int i =0;i<9;i++){
            for(int j =0;j<=8;j++){
                if(board[i][j]=='.') continue;
                mppr[board[i][j]]++;
                if(mppr[board[i][j]]>1) return false;
            }
            mppr.clear();
        }
        for (auto it : mppr) {
            cout << "Key = " << it.first << ", Value = " << it.second << endl;
        }

        //every column
        unordered_map<char,int> mppc;
        for (int j = 0;j < 9; j++) {
            mppc.clear();
            for (int i = 0; i < 9; i++) {
                if (board[i][j] == '.') continue;
                mppc[board[i][j]]++;
                if (mppc[board[i][j]] > 1) return false;
            }
        }

        //each box
      for (int boxRow = 0; boxRow < 3; boxRow++) {
    for (int boxCol = 0; boxCol < 3; boxCol++) {
        unordered_map<char,int> mppb;
        for (int i = boxRow * 3; i < boxRow * 3 + 3; i++) {
            for (int j = boxCol * 3; j < boxCol * 3 + 3; j++) {
                if (board[i][j] == '.') continue;
                mppb[board[i][j]]++;
                if (mppb[board[i][j]] > 1) return false;
            }
        }
    }
}

        return true;
        
    }
};
