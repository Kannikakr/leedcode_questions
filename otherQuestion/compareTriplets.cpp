/* Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty. Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.*/

vector<int> compareTriplets(vector<int> a, vector<int> b) {
   vector<int> result(2, 0);  // Initialize result with two zeros

    // Ensure that both 'a' and 'b' are of length 3
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            result[0]++;  // Alice gets a point
        } else if (a[i] < b[i]) {
            result[1]++;  // Bob gets a point
        }
    }
    return result;
}
