#include <stdio.h>

int main() {
    long long n, sum =0,t;
    scanf("%lld", &t);
    while(t--){
    scanf("%lld", &n);
    for(;n>0; n/=10 ){
      sum +=n%10;

    }
    printf("%lld\n", sum);
    sum =0;
    }   
    return 0;
}