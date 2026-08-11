class Solution {
public:
    int firstOccurence(vector<int>& nums, int x){
         int n =nums.size();
        int low = 0;
    int high = n - 1;
        int isFirst = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
        {
            isFirst = mid;
            high = mid - 1;
        }
        else if (nums[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return isFirst;

    }

    int lastOccurence(vector<int>& nums, int x){
         int n =nums.size();
        int low = 0;
    int high = n - 1;
    int isLast = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
        {
            isLast = mid;
            low = mid + 1;
        }
        else if (nums[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return isLast;

    }

    vector<int> searchRange(vector<int>& nums, int x) {
    int first=firstOccurence(nums,x);
    int last=lastOccurence(nums,x);

    return {first, last};
    }
};