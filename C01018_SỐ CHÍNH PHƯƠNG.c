#include <stdio.h>
#include <math.h>
// void checkscp(long long n){
    
// }

int main() {
    long long n,t;
    scanf("%lld", &t);
    while(t--){
    scanf("%lld", &n);
    // checkscp(n);
    int x= sqrt(n);
    if(n == x*x){
    printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
    return 0;
}