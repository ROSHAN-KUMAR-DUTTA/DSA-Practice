class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int suffix=1;
    int preffix=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(suffix==0) suffix=1;
        if(preffix==0) preffix=1;
        preffix*=nums[i];
        suffix*=nums[n-1-i];
        maxi=max(maxi,max(preffix,suffix));
    }
    return maxi;
    }
};