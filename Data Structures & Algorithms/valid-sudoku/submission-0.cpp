class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={};
        bool cols[9][9]={};
        bool boxes[9][9]={};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int num = board[i][j] - '1';
                int box = (i/3)*3 + (j/3);

                if(board[i][j]=='.')
                {
                    continue;
                }

                if(row[i][num]||cols[j][num]||boxes[box][num]){
                    return false;
                }
                row[i][num]=cols[j][num]=boxes[box][num]=true;
            }
        }
        return true;
    }
};
