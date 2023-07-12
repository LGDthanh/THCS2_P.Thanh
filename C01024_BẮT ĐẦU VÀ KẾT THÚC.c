#include <stdio.h>

int main() {
      int n,t;
      scanf("%d", &t);
      while(t--){
        scanf("%d",&n);
      int kt = n % 10;
        while(n>10){
            n/=10; 
        }
        if(n == kt){
                printf("YES\n");
            }else{
                printf("NO\n");

            }
      }

      
    return 0;
}