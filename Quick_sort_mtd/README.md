# Quick Sort

## Description

Quick Sort is a divide-and-conquer sorting algorithm that selects a pivot element and partitions the array around it.

The algorithm:

- Selects a pivot element
- Partitions the array into smaller and larger elements
- Recursively sorts the subarrays
- Produces a sorted array

## Program File

- `Quick_sort.c` → Source code
- `output.txt` → Program output

## Compilation

```bash
gcc Quick_sort.c -o quicksort
```

## Execution

```bash
./quicksort
```

## Sample Output

```text
Sorted array:
11 12 22 25 64
```

## Algorithm Type

- Divide and Conquer
- Sorting Algorithm

## Concepts Used

- Recursion
- Partitioning
- Pivot Selection
- Array Manipulation

## Complexity

- Best Case: O(n log n)
- Average Case: O(n log n)
- Worst Case: O(n²)
- Space Complexity: O(log n)
