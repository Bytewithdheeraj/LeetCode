class Solution {
public:
    bool ifExistsDFS(vector<vector<char>>& board, string word, int row, int col, int idx) {
        int m = board.size();
        int n = board[0].size();

        if (idx == word.length())
            return true;

        if (row < 0 || col < 0 || row >= m || col >= n)
            return false; // Out of bound check

        // Current cell does not match
        if (board[row][col] != word[idx]) {
            return false;
        }

        // Mark visited
        char temp = board[row][col];
        board[row][col] = '#';

        // Explore 4 directions
        bool found =
            ifExistsDFS(board, word, row + 1, col, idx + 1) ||
            ifExistsDFS(board, word, row - 1, col, idx + 1) ||
            ifExistsDFS(board, word, row, col + 1, idx + 1) ||
            ifExistsDFS(board, word, row, col - 1, idx + 1);

        // Restore cell
        board[row][col] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ifExistsDFS(board, word, i, j, 0))
                    return true;
            }
        }

        return false;
    }
};