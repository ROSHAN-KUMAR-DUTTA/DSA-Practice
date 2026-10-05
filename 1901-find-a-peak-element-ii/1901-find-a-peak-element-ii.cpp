class Solution {
public:
    int findMaxEleRow(vector<vector<int>>& matrix, int col) {
        int n = matrix.size();

        int largest = INT_MIN;
        int row = -1;

        for (int i = 0; i < n; i++) {
            if (matrix[i][col] > largest) {
                largest = matrix[i][col];
                row = i;
            }
        }

        return row;
    }

    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        if (n == 1 && m == 1)
            return {0, 0};

        int low = 0;
        int high = m - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int maxRow = findMaxEleRow(matrix, mid);

            int left = (mid > 0) ? matrix[maxRow][mid - 1] : -1;
            int right = (mid < m - 1) ? matrix[maxRow][mid + 1] : -1;

            if (matrix[maxRow][mid] > left && matrix[maxRow][mid] > right) {
                return {maxRow, mid};
            }

            else if (left > matrix[maxRow][mid]) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};