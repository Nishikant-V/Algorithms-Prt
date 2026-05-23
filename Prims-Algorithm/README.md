# Prim's Algorithm

## Description

Prim's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a weighted graph.

The algorithm:

- Starts from any vertex
- Selects the minimum weight edge
- Expands the MST step-by-step
- Avoids cycles

---

## Program File

- `prims.c` → Source code
- `output.txt` → Program output

---

## Compilation

```bash
gcc prims.c -o prims
```

---

## Execution

```bash
./prims
```

---

## Sample Output

```text
Edge    Weight
0 - 1      2
1 - 2      3
0 - 3      6
1 - 4      5
```

---

## Algorithm Type

- Greedy Algorithm
- Graph Algorithm

---

## Concepts Used

- Minimum Spanning Tree (MST)
- Adjacency Matrix
- Greedy Method
- Weighted Graph

---

## Time Complexity

```text
O(V^2)
```
