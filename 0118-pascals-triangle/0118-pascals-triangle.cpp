class Solution {
public:
    vector<int> generateRow(int n){
    vector<int>temp;
    temp.push_back(1);
    int ans=1;
    for(int i=1;i<n;i++){
        ans*=n-i;
        ans/=i;
        temp.push_back(ans);
    }
    return temp;
}
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back(generateRow(i+1));
    }
        return ans;
    }
};