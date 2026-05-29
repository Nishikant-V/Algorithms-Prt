// Floyd's Algorithm in C
// Time Complexity: O(V^3)
// Space Complexity: O(V^2)
#include <stdio.h>

#define V 4
#define INF 99999

int main()
{
    int g[V][V] = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}};

    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                if (g[i][k] != INF && g[k][j] != INF &&
                    g[i][k] + g[k][j] < g[i][j])
                    g[i][j] = g[i][k] + g[k][j];

    // Negative cycle detection
    for (int i = 0; i < V; i++)
    {
        if (g[i][i] < 0)
        {
            printf("Negative cycle detected\n");
            return 0;
        }
    }

    printf("Shortest distance matrix:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (g[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", g[i][j]);
        }
        printf("\n");
    }

    return 0;
}