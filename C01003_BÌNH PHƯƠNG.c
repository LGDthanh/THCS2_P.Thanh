
#include <stdio.h>

int main() {
    unsigned long long n,t;
    scanf("%llu", &t);
    while(t--){
    scanf("%llu", &n);
    printf("%llu\n", n*n);
    }
    return 0;
}