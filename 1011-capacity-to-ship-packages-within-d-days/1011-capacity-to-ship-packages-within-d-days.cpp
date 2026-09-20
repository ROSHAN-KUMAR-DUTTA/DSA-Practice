class Solution {
public:
    int numberOfDays(vector<int>& weight, int n, int capacity) {
        int days = 1;
        int load = 0;
        for (int i = 0; i < n; i++) {
            if ((load + weight[i]) > capacity) {
                days++;
                load = weight[i];
            } else
                load += weight[i];
        }
        return days;
    }

    int findSum(vector<int>& weight, int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += weight[i];
        }
        return sum;
    }
    int shipWithinDays(vector<int>& weight, int days) {
        int n=weight.size();
        int low = *max_element(weight.begin(),weight.end());
        int high = findSum(weight, n);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (numberOfDays(weight, n, mid) <= days) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return low;
    }
};