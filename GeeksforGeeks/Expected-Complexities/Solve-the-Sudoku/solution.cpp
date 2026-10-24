
class Solution {
public:
    bool isSafe(vector<vector<int>>& mat, int i, int j, int digit) {
        for (int col = 0; col < 9; col++) {
            if (mat[i][col] == digit)
                return false;
        }

        for (int row = 0; row < 9; row++) {
            if (mat[row][j] == digit)
                return false;
        }

        int boxRow = (i / 3) * 3;
        int boxCol = (j / 3) * 3;

        for (int x = boxRow; x < boxRow + 3; x++) {
            for (int y = boxCol; y < boxCol + 3; y++) {
                if (mat[x][y] == digit)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<int>>& mat, int i, int j) {
        if (i == 9)
            return true;

        int nextRow = i;
        int nextCol = j + 1;

        if (nextCol == 9) {
            nextRow = i + 1;
            nextCol = 0;
        }

        if (mat[i][j] != 0) {
            return solve(mat, nextRow, nextCol);
        }

        for (int digit = 1; digit <= 9; digit++) {
            if (isSafe(mat, i, j, digit)) {
                mat[i][j] = digit;

                if (solve(mat, nextRow, nextCol))
                    return true;

                mat[i][j] = 0;
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<int>>& mat) {
        solve(mat, 0, 0);
    }
};
