class Solution {
public:
    int pivotInteger(int n) {
        // Calculate the total sum from 1 to n
        int totalSum = n * (n + 1) / 2;
        
        // Track the sum from 1 to x
        int sumLeft = 0;
        
        // Iterate through possible values of x
        for (int x = 1; x <= n; x++) {
            // Add current x to sumLeft (sum from 1 to x)
            sumLeft += x;
            
            // Calculate sum from x to n
            int sumRight = totalSum - sumLeft + x;
            
            // Check if sumLeft equals sumRight
            if (sumLeft == sumRight) {
                return x;
            }
        }
        
        // If no pivot integer found, return -1
        return -1;
    }
};
