class Solution {
public:
    bool checkIfPangram(string s) {
        if (s.size() < 26)
            return false;
        vector<int> vec(26, 0);
        for (int i = 0; i < s.size(); i++) {
            vec[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (vec[i] == 0)
                return false;
        }
        return true;
    }
};