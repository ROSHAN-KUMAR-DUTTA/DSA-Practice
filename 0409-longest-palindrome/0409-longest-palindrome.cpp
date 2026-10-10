class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                upper[s[i] - 'A']++;
            } else {
                lower[s[i] - 'a']++;
            }
        }
        int ans = 0;
        int odd=0;
        for(int i=0;i<26;i++){
            if(lower[i]%2==0) ans+=lower[i];
            else {
                ans+=lower[i]-1;
                odd=1;
            }
            if(upper[i]%2==0) ans+=upper[i];
            else {
                ans+=upper[i]-1;
                odd=1;
            }
        }
        return ans+odd;
    }
};