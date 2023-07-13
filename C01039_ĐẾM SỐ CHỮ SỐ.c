#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    scanf("%d", &n);
    int count = 0;
    while (n > 0)
    { /* code */
        ++count;
        n /= 10;
    }
    printf("%d", count);
    return 0;
}