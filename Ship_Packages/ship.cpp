
bool kannu(const vector<int>& weights, int days, int capacity) {
    int currentLoad = 0;
    int dayCount = 1;

    for (int weight : weights) {
        if (currentLoad + weight > capacity) {
            dayCount++;
            currentLoad = 0;
        }
        currentLoad += weight;
    }

    return dayCount <= days;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (kannu(weights, days, mid)) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }

        return left;
    }
};