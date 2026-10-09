class Solution {
public:
    string defangIPaddr(string s) {
        string s1 ;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '.') {
                s1 += "[.]";
                continue;
            }
            s1 += s[i];
        }
        return s1;
    }
};