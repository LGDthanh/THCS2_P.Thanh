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
        scanf("%d",&a);
        int count=0;
        // SNT nếu count =0, ngược lại 
        // Vì số đầu tiên trong dãy là snt nên luôn ra snt
        for(int i = 2; i<=a; i++){
          while(a%i == 0){
            ++count;
            a =a/i;
            printf("%d ", i);

          }                    
        }
            printf("\n");

      }
      
    return 0;
}