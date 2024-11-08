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

### 8. Find the Pivot Integer

Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.

### 9. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

### 10. Reverse interger 

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

### 11. Complement of base 10 integer 

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

### 12. Unique number of Occurrences 

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

### 13. Find all duplicates in an array

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output. 

### 14. Move Zeroes 

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

### 15. Rotate array 

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

### 16 : Check ifarray id Sorted and Rotated 

Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

### 17 : Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

### 18 :  Rotate Image

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

### 19 : Search a 2D Matrix I 

You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 
 ### 20. Search a 2D matrix II 

 Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

### 21. Roman to Integer 

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 ### 22. Find the Index of the first Occurrence in a string

 Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 ### 23. Sqrt(X)

 Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

### 24. Counting Bits 

Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i. 