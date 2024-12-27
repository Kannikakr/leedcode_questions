/*
You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.



Note :
1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.
*/
//Time limit exceeded in this code
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   pair<int, int> p = {-1, -1}; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            if (p.first == -1) {
                p.first = i; 
            }
            p.second = i; 
        }
    }

    return p;
}
