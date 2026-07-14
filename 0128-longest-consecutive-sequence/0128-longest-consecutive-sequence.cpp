class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
    sort(nums.begin(),nums.end());
    int lastElement=INT_MIN;
    int cnt=1;
    int maxCnt=1;
    // unordered_set<int>st;
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastElement){
            cnt++;
            lastElement=nums[i];
            maxCnt=max(maxCnt,cnt);
            // st.insert(arr[i]);
        }
        else if(nums[i]!=lastElement){
            cnt=1;
            lastElement=nums[i];
        }
    }
    return maxCnt;
    }
};