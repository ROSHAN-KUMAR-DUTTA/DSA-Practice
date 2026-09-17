class Solution {
public:
    bool possible(vector<int>& arr, int n, int days, int m, int k) {
        int count = 0;
        int bloomed = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= days) {
                count++;
            } else {
                bloomed += count / k;
                count = 0;
            }
        }
        bloomed += count / k;
        return bloomed >= m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
        long long check=(long long)m*k;
        if ((long long)n < check)
            return -1;
        int low = *min_element(arr.begin(),arr.end());
        int high = *max_element(arr.begin(),arr.end());
        int days = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(arr, n, mid, m, k)) {
                days = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return days;
    }
};