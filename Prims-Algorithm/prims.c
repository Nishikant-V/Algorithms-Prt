#include <stdio.h>
#include <limits.h>

#define V 5

int main()
{
    int g[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}};

    int parent[V], key[V], mst[V];

    for (int i = 0; i < V; i++)
    {
        key[i] = INT_MAX;
        mst[i] = 0;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int i = 0; i < V - 1; i++)
    {
        int min = INT_MAX, u;

        for (int j = 0; j < V; j++)
        {
            if (!mst[j] && key[j] < min)
            {
                min = key[j];
                u = j;
            }
        }

        mst[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (g[u][v] && !mst[v] && g[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = g[u][v];
            }
        }
    }

    int cost = 0;

    printf("Edge\tWeight\n");

    for (int i = 1; i < V; i++)
    {
        printf("%d - %d\t%d\n", parent[i], i, g[i][parent[i]]);
        cost += g[i][parent[i]];
    }

    printf("Minimum Cost = %d\n", cost);

    return 0;
}