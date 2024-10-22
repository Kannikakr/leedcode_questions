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

### 3.Merge Sorted Array 

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

 Merge nums1 and nums2 into a single array sorted in non-decreasing order.

 The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

### 4.Binary Search 

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

### 5.Capacity To Ship Packages Within D Days

A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

### 6. Peak element in mountain array 

You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

### 7. Find Pivot Index

Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.