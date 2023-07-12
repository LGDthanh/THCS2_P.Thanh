#include <stdio.h>

int main() {
    float n;
    scanf("%f", &n);
    printf("%.2f", (double)((n*9/5)+32));
    return 0;
}