#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    scanf("%d", &n);
    scanf("%d", &m);

    int sum = 0;
    if (n > m)
    {
        for (int i = m; i <= n; i++)
        {
            sum = sum + i;
        }
    }
    else
    {
        for (int i = n; i <= m; i++)
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}
