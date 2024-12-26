/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.
Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

int arr[n]: an array of integers
Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with 6 digits after the decimal. The function should not return a value.
*/

void plusMinus(vector<int> arr) {
    int n = arr.size();
    int pos=0, neg=0, zer=0;
    for (int i=0; i<n ; i++){
        if(arr[i]==0){
            zer++;
        }
        else if ( arr[i]>0){
            pos++;
        }
        else {
            neg++;
        }
    }
    double posp = static_cast<double>(pos) / n;
    double negp = static_cast<double>(neg) / n;
    double zerp = static_cast<double>(zer) / n;

    cout << fixed << setprecision(6) << posp << endl;
    cout << fixed << setprecision(6) << negp << endl;
    cout << fixed << setprecision(6) << zerp << endl;
}
