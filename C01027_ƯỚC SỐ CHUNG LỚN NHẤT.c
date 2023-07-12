#include <stdio.h>
#include <math.h>

int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return UCLN(b, a%b);
}
int main() {
      int a,b,t;
      scanf("%d", &t);
      while(t--){
        scanf("%d %d",&a, &b);
        int uscln = 1;
    // for (int i = 1; i <= a && i <= b; i++) {
    //     if (a % i == 0 && b % i == 0) {
    //         uscln = i;
    //     }

    // thuật toán euclid
    printf("%d\n", UCLN(a,b));
        }
    return 0;
}