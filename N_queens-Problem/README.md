# N-Queens Problem

## Description

The N-Queens Problem is a classic backtracking problem where N queens must be placed on an N × N chessboard such that no two queens attack each other.

The algorithm:

- Places one queen in each row
- Checks whether the position is safe
- Uses backtracking when a conflict occurs
- Continues until all queens are placed

## Program File

- `nqueens.c` → Source code
- `output.txt` → Program output

## Compilation

```bash
gcc nqueens.c -o nqueens
```

## Execution

```bash
./nqueens
```

## Sample Output

```text
Enter value of N: 4

Solution found:

 .  Q  .  .
 .  .  .  Q
 Q  .  .  .
 .  .  Q  .
```

## Algorithm Type

- Backtracking Algorithm
- Recursion

## Concepts Used

- Backtracking
- Recursion
- State Space Tree
- Constraint Satisfaction
- Chessboard Representation

## Complexity

- Time Complexity: O(N!)
- Space Complexity: O(N²)

## Applications

- Constraint Satisfaction Problems (CSP)
- Scheduling Problems
- Resource Allocation
- Artificial Intelligence Search Problems
