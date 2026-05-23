# Kruskal's Algorithm

## Description

Kruskal's Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a weighted graph.

The algorithm:

- Sorts all edges by weight
- Selects the smallest edge
- Avoids cycles using Union-Find
- Continues until MST is formed

---

## Program File

- `kruskals.c` → Source code
- `output.txt` → Program output

---

## Compilation

```bash
gcc kruskals.c -o kruskals
```

---

## Execution

```bash
./kruskals
```

---

## Sample Output

```text
Edges in MST:
2 - 3 = 4
0 - 3 = 5
0 - 1 = 10

Minimum cost = 19
```

---

## Algorithm Type

- Greedy Algorithm
- Graph Algorithm

---

## Concepts Used

- Minimum Spanning Tree (MST)
- Union Find
- Edge Sorting
- Cycle Detection
