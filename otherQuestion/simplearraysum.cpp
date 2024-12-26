//Given an array of integers, find the sum of its elements.
/* Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers */

int simpleArraySum(vector<int> ar) {
   int sum=0;
   for(int i=0; i< ar.size(); i++)
   {
    sum  = sum + ar[i];
   }
   return sum;
}