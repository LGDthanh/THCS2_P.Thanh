#include <stdio.h>

int main() {
    long long n, sum =0;
    scanf("%lld", &n);
    for(;n>0; n/=10 ){
      sum +=n%10;

    }
    printf("%lld", sum);
    return 0;
}