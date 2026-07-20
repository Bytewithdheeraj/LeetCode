class Solution {
public:
    void rotateArray(vector<int>& arr, int k) {
        int n = arr.size();
        k %= n;

        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
    }

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int size = m * n;

        k %= size;

        vector<int> temp;
        temp.reserve(size);

        // Convert 2D grid to 1D array
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                temp.push_back(grid[i][j]);
            }
        }

        // Rotate the 1D array
        rotateArray(temp, k);

        // Convert back to 2D grid
        vector<vector<int>> ans(m, vector<int>(n));
        int idx = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = temp[idx++];
            }
        }

        return ans;
    }
};