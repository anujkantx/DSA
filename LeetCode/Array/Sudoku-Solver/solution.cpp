class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int i, int j, int digit){
        digit = '0'+digit;
        for(int col=0; col<9; col++){
            if(board[i][col]==digit){
                return false;
            }
        }
        for(int row=0; row<9; row++){
            if(board[row][j]==digit){
                return false;
            }
        }
        int boxRow = ((i/3)*3);
        int boxCol = ((j/3)*3);
        for(int x = boxRow; x <= boxRow+2; x++){
            for(int y = boxCol; y<=boxCol+2; y++){
                if(board[x][y]==digit){
                    return false;
                }
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board, int i, int j){
        if(i==9){
            return true;
        }
        int nextRow = i;
        int nextCol = j+1;
        if(j+1 == 9){
            nextRow = i+1;
            nextCol = 0;
        }

        if(board[i][j]!='.'){
            return solve(board, nextRow, nextCol);
        }else{
            for(int digit=1; digit<=9; digit++){
                if(isSafe(board, i, j, digit)){
                    board[i][j] = '0'+ digit;
                    if(solve(board, nextRow, nextCol)){
                        return true;
                    }
                    board[i][j] = '.';
                }
            }
        }

        return false;

    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
};