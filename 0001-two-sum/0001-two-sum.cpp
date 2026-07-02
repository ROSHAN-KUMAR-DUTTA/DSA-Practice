class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target) return {i,j};
        //     }
        // }
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int complement=target-nums[i];
            if(mpp.find(complement)!=mpp.end()) return {i,mpp[complement]};
            mpp[nums[i]]=i;
        }
        return {-1};
    }
};