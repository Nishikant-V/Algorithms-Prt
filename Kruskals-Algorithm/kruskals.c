#include <stdio.h>

struct Edge
{
    int u, v, w;
};

struct Edge e[5] = {
    {0, 1, 10},
    {0, 2, 6},
    {0, 3, 5},
    {1, 3, 15},
    {2, 3, 4}};

int parent[10];

int find(int x)
{
    while (parent[x] != x)
        x = parent[x];

    return x;
}

int main()
{
    int i, j, cost = 0;

    // Initialize parent
    for (i = 0; i < 4; i++)
        parent[i] = i;

    // Simple sorting
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (e[i].w > e[j].w)
            {
                struct Edge temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    printf("Edges in MST:\n");

    for (i = 0; i < 5; i++)
    {
        int a = find(e[i].u);
        int b = find(e[i].v);

        if (a != b)
        {
            parent[a] = b;

            printf("%d - %d = %d\n", e[i].u, e[i].v, e[i].w);

            cost = cost + e[i].w;
        }
    }

    printf("Minimum cost = %d\n", cost);

    return 0;
}