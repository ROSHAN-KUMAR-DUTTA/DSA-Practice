class Solution {
public:
    void reverseString(vector<char>& s1) {
        int start = 0;
        int end = s1.size() - 1;
        while (start < end) {
            swap(s1[start], s1[end]);
            start++;
            end--;
        }
    }
};