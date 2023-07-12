#include <stdio.h>

int main() {
    int n,t;
    scanf("%d", &t);
    // while(t--){
    scanf("%d", &n);
    if(n ==0 || t== 0){
    printf("%d", 0);
    }else{
    printf("%d", t+n);
    printf(" %d", t-n);
    printf(" %d", t*n);
    printf(" %0.2f", (double)t/n);
    printf(" %d\n", t%n);
    }
    // }
    return 0;
}