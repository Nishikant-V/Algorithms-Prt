// Warshalls Algorithm
// Time Complexity: O(V^3)
// Space Complexity: O(V^2)
#include <stdio.h>

#define V 4

int main()
{
    int g[V][V] = {
        {1, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 0, 1, 1},
        {0, 0, 0, 1}};

    for (int k = 0; k < V; k++)
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                g[i][j] = g[i][j] || (g[i][k] && g[k][j]);

    printf("Transitive closure matrix:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i == j)
                printf("1 ");
            else
                printf("%d ", g[i][j]);
        }
        printf("\n");
    }

    return 0;
}
