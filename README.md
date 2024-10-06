# Leet Code questions in c++

### 1.Two Sum 

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Answer solution : 

1.Double Loop: It uses two nested loops to check every possible pair of elements:
The outer loop (i) iterates over the elements.
The inner loop (j) starts from i + 1 to avoid rechecking pairs.

2.Condition Check: For each pair of indices i and j, it checks if the sum of nums[i] and nums[j] equals the target.
Return Result: If a pair is found, it returns a vector containing the indices [i, j]. If no pair is found after checking all combinations, an empty vector is returned.

This is a brute-force solution with time complexity of O(n^2).