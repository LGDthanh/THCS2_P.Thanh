#include <stdio.h>

int main() {
    unsigned long long n,t;
    scanf("%llu", &t);
    while(t--){
    scanf("%llu", &n);
    printf("%.15lf\n", (double)1/n);
    }
    return 0;
}