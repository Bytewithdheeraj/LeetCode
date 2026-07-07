# LeetCode

My solutions to LeetCode problems in C++, solved while preparing for coding interviews. Synced automatically with [LeetHub v3](https://github.com/raphaelheinz/LeetHub-3.0).

![Solved](https://img.shields.io/badge/Solved-15-brightgreen)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

## Stats

| Difficulty | Count |
|---|---|
| 🟢 Easy | 9 |
| 🟡 Medium | 5 |
| 🔴 Hard | 1 |
| **Total** | **15** |

## Problems

| # | Title | Difficulty | Topics | Solution |
|---|---|---|---|---|
| 1 | Two Sum | 🟢 Easy | Array, Hash Table | [C++](./0001-two-sum/0001-two-sum.cpp) |
| 4 | Median of Two Sorted Arrays | 🔴 Hard | Array, Binary Search, Divide and Conquer | [C++](./0004-median-of-two-sorted-arrays/0004-median-of-two-sorted-arrays.cpp) |
| 9 | Palindrome Number | 🟢 Easy | Math | [C++](./0009-palindrome-number/0009-palindrome-number.cpp) |
| 21 | Merge Two Sorted Lists | 🟢 Easy | Linked List, Recursion | [C++](./0021-merge-two-sorted-lists/0021-merge-two-sorted-lists.cpp) |
| 31 | Next Permutation | 🟡 Medium | Array, Two Pointers | [C++](./0031-next-permutation/0031-next-permutation.cpp) |
| 152 | Maximum Product Subarray | 🟡 Medium | Array, Dynamic Programming | [C++](./0152-maximum-product-subarray/0152-maximum-product-subarray.cpp) |
| 153 | Find Minimum in Rotated Sorted Array | 🟡 Medium | Array, Binary Search | [C++](./0153-find-minimum-in-rotated-sorted-array/0153-find-minimum-in-rotated-sorted-array.cpp) |
| 169 | Majority Element | 🟢 Easy | Array, Hash Table, Sorting, Boyer-Moore Voting | [C++](./0169-majority-element/0169-majority-element.cpp) |
| 217 | Contains Duplicate | 🟢 Easy | Array, Hash Table, Sorting | [C++](./0217-contains-duplicate/0217-contains-duplicate.cpp) |
| 238 | Product of Array Except Self | 🟡 Medium | Array, Prefix Sum | [C++](./0238-product-of-array-except-self/0238-product-of-array-except-self.cpp) |
| 242 | Valid Anagram | 🟢 Easy | Hash Table, String, Sorting | [C++](./0242-valid-anagram/0242-valid-anagram.cpp) |
| 349 | Intersection of Two Arrays | 🟢 Easy | Array, Hash Table, Two Pointers, Sorting | [C++](./0349-intersection-of-two-arrays/0349-intersection-of-two-arrays.cpp) |
| 350 | Intersection of Two Arrays II | 🟢 Easy | Array, Hash Table, Two Pointers, Sorting | [C++](./0350-intersection-of-two-arrays-ii/0350-intersection-of-two-arrays-ii.cpp) |
| 704 | Binary Search | 🟢 Easy | Array, Binary Search | [C++](./0704-binary-search/0704-binary-search.cpp) |
| 2549 | Count Distinct Numbers on Board | 🟡 Medium | Array, Math, Simulation | [C++](./2549-count-distinct-numbers-on-board/2549-count-distinct-numbers-on-board.cpp) |

## By Topic

- **Array** — [Two Sum](./0001-two-sum), [Median of Two Sorted Arrays](./0004-median-of-two-sorted-arrays), [Next Permutation](./0031-next-permutation), [Maximum Product Subarray](./0152-maximum-product-subarray), [Find Minimum in Rotated Sorted Array](./0153-find-minimum-in-rotated-sorted-array), [Majority Element](./0169-majority-element), [Contains Duplicate](./0217-contains-duplicate), [Product of Array Except Self](./0238-product-of-array-except-self), [Intersection of Two Arrays](./0349-intersection-of-two-arrays), [Intersection of Two Arrays II](./0350-intersection-of-two-arrays-ii), [Binary Search](./0704-binary-search), [Count Distinct Numbers on Board](./2549-count-distinct-numbers-on-board)
- **Hash Table** — [Two Sum](./0001-two-sum), [Majority Element](./0169-majority-element), [Contains Duplicate](./0217-contains-duplicate), [Valid Anagram](./0242-valid-anagram), [Intersection of Two Arrays](./0349-intersection-of-two-arrays), [Intersection of Two Arrays II](./0350-intersection-of-two-arrays-ii)
- **Binary Search** — [Median of Two Sorted Arrays](./0004-median-of-two-sorted-arrays), [Find Minimum in Rotated Sorted Array](./0153-find-minimum-in-rotated-sorted-array), [Binary Search](./0704-binary-search)
- **Linked List** — [Merge Two Sorted Lists](./0021-merge-two-sorted-lists)
- **Dynamic Programming** — [Maximum Product Subarray](./0152-maximum-product-subarray)
- **Two Pointers** — [Next Permutation](./0031-next-permutation), [Intersection of Two Arrays](./0349-intersection-of-two-arrays), [Intersection of Two Arrays II](./0350-intersection-of-two-arrays-ii)
- **Math** — [Palindrome Number](./0009-palindrome-number), [Count Distinct Numbers on Board](./2549-count-distinct-numbers-on-board)
- **String** — [Valid Anagram](./0242-valid-anagram)

## Structure

Each problem lives in its own folder:

```
000X-problem-name/
├── 000X-problem-name.cpp   # Solution
└── README.md                # Problem statement (auto-synced)
```

## Notes

Each solution folder's `README.md` currently holds the raw LeetCode problem statement. Ongoing goal: append a short **Approach** and **Complexity** section to each one, e.g.:

> **Approach:** Single-pass hash map storing value → index; check for `target - nums[i]` on each iteration.
> **Complexity:** Time O(n), Space O(n)

This documents reasoning, not just the answer, and doubles as interview-prep notes.
