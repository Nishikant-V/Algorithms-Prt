# Warshall's Algorithm

## Description

Warshall's Algorithm is used to find the transitive closure of a directed graph.

The algorithm:

- Determines whether a path exists between every pair of vertices
- Uses dynamic programming
- Updates reachability using intermediate vertices
- Produces a reachability matrix

## Program File

- `Warshalls.c` → Source code
- `output.txt` → Program output

## Compilation

```bash
gcc Warshall.c -o warshall
```

## Execution

```bash
./warshall
```

## Sample Output

```text
Transitive closure matrix:
1 1 1 1
0 1 1 1
0 0 1 1
0 0 0 1
```

## Algorithm Type

- Dynamic Programming
- Graph Algorithm

## Concepts Used

- Transitive Closure
- Reachability Matrix
- Adjacency Matrix
- Directed Graph

## Complexity

- Time Complexity: O(V³)
- Space Complexity: O(V²)
