class Solution {
public:
    void reverseArray(vector<int>& nums,int start,int end){
    for(int i=start;i<=(end+start)/2;i++){
        swap(nums[i],nums[end+start-i]);
    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int start=0;
        int mid=n-k-1;
        int end=n-1;
        reverseArray(nums,start,mid);
        reverseArray(nums,mid+1,end);
        reverseArray(nums,start,end);
    }
};