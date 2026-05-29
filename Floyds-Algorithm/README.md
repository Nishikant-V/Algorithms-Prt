# Floyd–Warshall Algorithm

## Description

Floyd–Warshall Algorithm is a dynamic programming algorithm used to find the shortest paths between all pairs of vertices in a weighted graph.

The algorithm:

- Considers each vertex as an intermediate vertex
- Updates shortest distances between all vertex pairs
- Supports negative edge weights
- Detects negative weight cycles

## Program File

- `Floyd.c` → Source code
- `output.txt` → Program output

## Compilation

```bash
gcc Floyd.c -o Floyd
```

## Execution

```bash
./Floyd
```

## Sample Output

```text
Shortest distance matrix:

      0      5      8      9
    INF      0      3      4
    INF    INF      0      1
    INF    INF    INF      0
```

## Algorithm Type

- Dynamic Programming
- Graph Algorithm

## Concepts Used

- All-Pairs Shortest Path (APSP)
- Adjacency Matrix
- Dynamic Programming
- Negative Cycle Detection

## Complexity

- Time Complexity: O(V³)
- Space Complexity: O(V²)
