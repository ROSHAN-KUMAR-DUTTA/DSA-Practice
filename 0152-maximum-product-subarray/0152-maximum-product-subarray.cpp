class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
    int suffixProduct = INT_MIN;
    int suffix = 1;
    int prefixProduct = INT_MIN;
    int prefix = 1;
    for (int i = 0; i < n; i++)
    {
        suffix *= nums[i];
        prefix *= nums[n-1-i];

        suffixProduct = max(suffixProduct, suffix);
        prefixProduct = max(prefixProduct, prefix);

        if (nums[i] == 0)
        {
            suffix=1;
        }
        if(nums[n-1-i]==0){
            prefix = 1;
        }
    }
    return max(prefixProduct, suffixProduct);
    }
};