class Solution {
public:
    long long findHours(vector<int>& piles, int n, int k) {
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (k + piles[i] - 1) / k;
        }
        return ans ;
    }

    long long minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size();
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = LLONG_MAX;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long hours = findHours(piles, n, mid);
            if (hours <= h) {
                ans = min(ans, mid);
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};