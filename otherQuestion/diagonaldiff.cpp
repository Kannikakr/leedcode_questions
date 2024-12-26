/*Given a square matrix, calculate the absolute difference between the sums of its diagonals.
Function description

Complete the  function in the editor below.

diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Return

int: the absolute diagonal difference
*/

int diagonalDifference(vector<vector<int>> arr) {
      int sum=0; 
      int ans =0;
      int one =0; 
      int n = arr.size();
      for(int i=0; i<n; i++){
        sum = sum + arr[i][i];
        one = one + arr[i][n-i-1];
      }
      ans = abs(sum - one);
      return ans;
}