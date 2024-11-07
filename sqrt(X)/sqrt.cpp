class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x; 
        
        int s = 0;
        int e = x;
        int ans = 0; 
        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long square = (long long)mid * mid; 
            
            if (square == x) {
                return mid; 
            }
            if (square < x) {
                ans = mid; 
                s = mid + 1; 
            } else {
                e = mid - 1; 
            }
        }
        return ans; 
    }
};
