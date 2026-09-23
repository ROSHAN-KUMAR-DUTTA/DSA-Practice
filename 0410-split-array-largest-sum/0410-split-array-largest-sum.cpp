class Solution {
public:
    int sum(vector<int>& arr, int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        return sum;
    }

    bool isPossible(vector<int>& arr, int n, int k, int maxSum) {
        int countArray = 1;
        int sum = arr[0];
        for (int i = 1; i < n; i++) {
            if ((sum + arr[i]) > maxSum) {
                sum = arr[i];
                countArray++;
            } else {
                sum += arr[i];
            }
        }
        return countArray <= k;
    }
    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        if ((n < k) || (k < 1))
            return -1;
        int low = *max_element(arr.begin(),arr.end());
        int high = sum(arr, n);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, k, mid))
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};