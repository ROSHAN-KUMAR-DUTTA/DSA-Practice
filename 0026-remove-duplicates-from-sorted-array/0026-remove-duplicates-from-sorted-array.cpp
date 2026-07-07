class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
    int key = 0;

    for (int i = 1; i < n; i++)
    {
        
        if (nums[i-1]!= nums[i])
        {
            nums[key]=nums[i-1];
            key++;
        }
        if (i == n - 1)
        {
            nums[key] = nums[i];
            key++;
        }
    }
    return key;
    }
};