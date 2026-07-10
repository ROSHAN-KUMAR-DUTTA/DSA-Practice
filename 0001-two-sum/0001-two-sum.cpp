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
        int target1=target-nums[i];
        if(mpp.find(target1)!=mpp.end() && i!=mpp[target1]){
            return {mpp[target1],i};
        }
        else{
            mpp[nums[i]]=i;
        }
    }
    return {-1,-1};
    }
};