class Solution {
public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
                return mid;
            else if (arr[low] <= arr[mid]) {
                if (arr[low] <= x && x <= arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            } else {
                if (arr[mid] <= x && x <= arr[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};