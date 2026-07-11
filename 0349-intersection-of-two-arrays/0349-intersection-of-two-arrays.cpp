class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>intersection;
        unordered_set<int>mpp(nums1.begin(),nums1.end());
        for(auto it:nums2){
            if(mpp.find(it)!=mpp.end()){
                intersection.push_back(it);
                mpp.erase(it);
            }
        }
        return intersection;
    }
};