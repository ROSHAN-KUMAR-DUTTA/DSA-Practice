class Solution {
public:
    bool isPalindrome(int x) {
        long long int reverseNumber=0;
    int i=x;
    while(i>0){
        reverseNumber=reverseNumber*10+(i%10);
        i/=10;
    }
    return reverseNumber==x;
    }
};