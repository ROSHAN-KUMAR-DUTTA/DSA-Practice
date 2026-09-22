class Solution {
public:
    bool canWePlace(vector<int>& position, int n, int minDist, int m) {
        int countMagnet = 1;
        int lastPlaced = position[0];
        for (int i = 1; i < n; i++) {
            if ((position[i] - lastPlaced) >= minDist) {
                countMagnet++;
                lastPlaced = position[i];
            }
            if (countMagnet >= m)
                return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int low = 1;
        int high = position[n - 1] - position[0];
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canWePlace(position, n, mid, m)) {
                low = mid + 1;
            } else
                high = mid - 1;
        }
        return high;
    }
};