#include <iostream>
int main()
{
    int m, n, i, j;
    int A[m][n];
    scanf("%d , %d", &m, &n);

    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[m][n]);
        }
    }

    int B[m][n];
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            scanf("%d", &B[m][n]);
        }
    }

    int C[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", C[i][j]);
        }

        printf("\n");
    }

    return 0;
}