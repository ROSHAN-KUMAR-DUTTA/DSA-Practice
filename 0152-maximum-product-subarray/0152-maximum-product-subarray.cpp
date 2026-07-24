class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        long long suffix=1;
    long long preffix=1;
    long long maxi=LLONG_MIN;
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