class Solution {
public:
    bool possible(vector<int>& arr, long long n, long long days, long long m, long long k) {
        int count = 0;
        int bloomed = 0;
        for (int i = 0; i < n; i++)  {
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
    int minDays(vector<int>& arr, long long m, long long k) {
        long long n=arr.size();
        if (n < m * k)
            return -1;
        long long low = *min_element(arr.begin(),arr.end());
        long long high = *max_element(arr.begin(),arr.end());
        long long days = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(arr, n, mid, m, k)) {
                days = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return (int)days;
    }
};