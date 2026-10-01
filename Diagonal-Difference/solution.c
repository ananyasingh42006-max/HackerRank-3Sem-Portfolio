#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int diagonal1 = 0;
    int diagonal2 = 0;

    for (int i = 0; i < n; i++)
    {
        diagonal1 += arr[i][i];
        diagonal2 += arr[i][n - 1 - i];
    }

    int difference = abs(diagonal1 - diagonal2);

    printf("%d\n", difference);

    return 0;
}
