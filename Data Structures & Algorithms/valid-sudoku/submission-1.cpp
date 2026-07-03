class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        vector<vector<bool>> row (n, vector<bool> (n,false));
        vector<vector<bool>> col (n, vector<bool> (n,false));
        vector<vector<bool>> sqa (n, vector<bool> (n,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='.')continue;
                int t=(board[i][j]-'0')-1;
                if(row[i][t])return false;
                row[i][t]=true;
                if(col[j][t])return false;
                col[j][t]=true;
                if(sqa[i/3*3+j/3][t])return false;
                sqa[i/3*3+j/3][t]=true;
            }
        }
        return true;
    }
};
