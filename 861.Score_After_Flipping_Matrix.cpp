class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

        // if first number of row is zero than flip row
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < m; j++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }

        // if zero is more in a column than flip column
        for (int j = 0; j < m; j++) {
            int cnt_0 = 0, cnt_1 = 0;
            for (int i = 0; i < n; i++) {
                if (grid[i][j] == 0)
                    cnt_0++;
                else
                    cnt_1++;
            }
            if (cnt_0 > cnt_1) {
                for (int i = 0; i < n; i++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }
        //to convert to binary
        int ans = 0;
        for (int i = 0; i < n; i++) {
            string binary;
            for (int j = 0; j < m; j++)
                binary += to_string(grid[i][j]);
            //to convert string binary to decimal
            ans += stoi(binary, NULL, 2);//copied from other source
        }
        return ans;
    }
};