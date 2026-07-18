class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
    int maxProduct = INT_MIN;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= nums[i];
        maxProduct = max(maxProduct, product);
        if (nums[i] == 0)
        {
            product = 1;
        }
    }
    int maxProduct1 = INT_MIN;
    int product1 = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        product1 *= nums[i];
        maxProduct1 = max(maxProduct1, product1);
        if (nums[i] == 0)
        {
            product1 = 1;
        }
    }
    return max(maxProduct1, maxProduct);
    }
};