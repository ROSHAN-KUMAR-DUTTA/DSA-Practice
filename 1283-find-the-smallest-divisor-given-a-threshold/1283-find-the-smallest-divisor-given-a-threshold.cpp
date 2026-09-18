class Solution {
public:
    long long divisorAns(vector<int>& arr, int n, int divisor) {
        long long d = 0;
        for (int i = 0; i < n; i++) {
            d += ((long long)arr[i] + divisor - 1) / divisor;
        }
        return d;
    }

    int smallestDivisor(vector<int>& arr, int threshold) {
        int n=arr.size();
        int ans = -1;
        int low = 1;
        int high =  *max_element(arr.begin(),arr.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (divisorAns(arr, n, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};