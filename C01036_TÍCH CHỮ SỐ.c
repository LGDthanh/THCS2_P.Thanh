#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    scanf("%d", &n);
    int tich=1,x;
    while(n>0){
        x=n%10;
        tich= tich*x;
        n/=10;

    }
    printf("%d", tich);


    return 0;
}
