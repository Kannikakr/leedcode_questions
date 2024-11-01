class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        // Start from the top-right corner
        int row = 0, col = cols - 1;
        
        while (row < rows && col >= 0) {
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                // Move left
                col--;
            } else {
                // Move down
                row++;
            }
        }
        
        return false; 
    }
};