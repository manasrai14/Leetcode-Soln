class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9];
        unordered_set<char> col[9];
        unordered_set<char> grid[9];

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                char appearence = board[r][c];
                int k = (r / 3) * 3 + (c / 3);

                if (row[r].count(appearence) || col[c].count(appearence) ||grid[k].count(appearence)) {
                    return false;
                }

                row[r].insert(appearence);
                col[c].insert(appearence);
                grid[k].insert(appearence);
            }
        }

        return true;        
    }
};