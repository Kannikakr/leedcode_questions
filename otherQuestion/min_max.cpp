/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Function Description

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

arr: an array of 5 integers
Print

Print two space-separated integers on one line: the minimum sum and the maximum sum of 4 of 5 elements.
*/

void miniMaxSum(vector<int> arr) {
    int min_ele= arr[0];
    int max_ele= arr[0];
    long long sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum = sum + arr[i];
        min_ele = min(arr[i],min_ele );
        max_ele = max(arr[i], max_ele);
        
    }
    cout << sum-max_ele << " "<< sum-min_ele << endl;
}
