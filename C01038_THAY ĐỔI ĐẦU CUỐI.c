#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    scanf("%d", &n);
    int i = 0, last, tmp = 0, x = 10;
    last = n % 10; // 2345%10 = 5
    n /= 10;       // 2345/10 = 234
    while (n / 10 != 0)
    {
        tmp += (n % 10) * x;
        // 234%10*10 = 4*10 => tmp = tmp +40 =40
        x *= 10;
        n /= 10;
        // 23%10*100 = 3*100 => tmp = 340
        // 2/10 = 0 Dừng vòng lặp
    }
    last = last * x + tmp + n; // 5*1000 +340 +2 =5342
    printf("%d", last);
    return 0;
}
