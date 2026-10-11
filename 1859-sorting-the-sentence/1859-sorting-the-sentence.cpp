class Solution {
public:
    string sortSentence(string s) {
        int index = 0 ;
        map<int, string> mpp;
        while (index < s.size()) {
            string ans = "";
            while (index < s.size() && s[index] != ' ') {
                ans += s[index];
                index++;
            }
            ans.pop_back();
            mpp[s[index - 1] - '0'] = ans;
            index++;
        }
        string ans = "";
        for (const auto& entry : mpp) {
            if (entry.first != mpp.size())
                ans += entry.second + " ";
            else
                ans += entry.second;
        }
        return ans;
    }
};