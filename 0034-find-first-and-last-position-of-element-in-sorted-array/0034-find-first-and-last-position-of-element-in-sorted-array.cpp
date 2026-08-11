class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int low1 = 0;
        int high1 = n - 1;
        int isLast = -1;
        int isFirst = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == x) {
                isLast = mid;
                low = mid + 1;
            } else if (nums[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        while (low1 <= high1) {
            int mid = low1 + (high1 - low1) / 2;
            if (nums[mid] == x) {
                isFirst = mid;
                high1 = mid - 1;
            } else if (nums[mid] > x)
                high1 = mid - 1;
            else
                low1 = mid + 1;
        }

        return {isFirst,  isLast};
    }
};