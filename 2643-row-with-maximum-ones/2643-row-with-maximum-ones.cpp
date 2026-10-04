class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int maxCnt = 0;
        int rowOne = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1) {
                    cnt++;
                }
            }
            if (cnt > maxCnt) {
                maxCnt = cnt;
                rowOne = i;
            }
        }
        return {rowOne,maxCnt};
    }
};