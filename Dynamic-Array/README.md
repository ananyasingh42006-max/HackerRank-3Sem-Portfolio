# Dynamic Array

## Problem
Implement a dynamic array using sequences and process type 1 and type 2 queries.

## Approach
- Create N empty sequences.
- For type 1, append the value to the selected sequence.
- For type 2, find the required element and update `lastAnswer`.
- Print `lastAnswer` for each type 2 query.

## Complexity
- Time Complexity: O(N + Q)
- Space Complexity: O(N)
