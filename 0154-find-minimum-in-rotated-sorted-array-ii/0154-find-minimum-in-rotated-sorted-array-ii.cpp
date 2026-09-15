class Solution {
public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mini = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            mini = min(mini, arr[low]);
            if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
                low++;
                high--;
                continue;
            }
            if (arr[low] <= arr[mid]) {
                low = mid + 1;
            } else {
                mini = min(mini, arr[mid]);
                high = mid - 1;
            }
        }
        return mini;
    }
};