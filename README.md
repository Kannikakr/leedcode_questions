# Leet Code questions in c++

### 1.Two Sum 

##### Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

##### You may assume that each input would have exactly one solution, and you may not use the same element twice.

##### You can return the answer in any order.

Answer solution : s

1.Double Loop: It uses two nested loops to check every possible pair of elements:
The outer loop (i) iterates over the elements.
The inner loop (j) starts from i + 1 to avoid rechecking pairs.

2.Condition Check: For each pair of indices i and j, it checks if the sum of nums[i] and nums[j] equals the target.
Return Result: If a pair is found, it returns a vector containing the indices [i, j]. If no pair is found after checking all combinations, an empty vector is returned.

This is a brute-force solution with time complexity of O(n^2).

### 2.Palindrome Number 

##### Given an integer x, return true if x is a 
palindrome, and false otherwise.

Answer :
1.Negative Number Check:
If x is less than 0, it immediately returns false since negative numbers can't be palindromes (due to the negative sign).

2.Reverse the Number:
Variables a, rem, and rev are used:
a stores the original value of x.
rem holds the remainder when x is divided by 10 (used to get the last digit).
rev will store the reversed number.

3.Reverse Calculation:
A while loop continues until x becomes 0.
The last digit (rem = x % 10) is extracted.
rev is updated by multiplying it by 10 and adding rem (building the reverse of x).
x is reduced by removing the last digit (x = x / 10).

4.Overflow Check:
The condition if (rev > (INT_MAX - rem) / 10) ensures that there’s no overflow when calculating the reversed number (rev). If overflow is detected, it returns false.

5.Palindrome Check:
After the loop, the function checks if the original number (a) is equal to the reversed number (rev). If they are equal, it returns true (indicating a palindrome), otherwise, false.
