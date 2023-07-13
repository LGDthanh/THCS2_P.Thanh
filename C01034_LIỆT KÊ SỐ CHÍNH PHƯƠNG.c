#include <stdio.h>
#include <math.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int bd = sqrt(m);
    int kt = sqrt(n);

    if (bd * bd < m) {
        printf("%d\n", kt - bd);
        // Nếu bd*bd < m thì bd+1. Giả sử bd = 11 thì sqrt(11) = 3,3 làm tròn xuống 3 thì sẽ in ra 9 là sai
        for (int i = bd + 1; i <= kt; i++) {
            printf("%d\n", i * i);
        }
    } else {
        printf("%d\n", kt - bd + 1);
         // vì giả sử bd = 4 và kt =5 thì khi tinh ra chỉ có 1 scp là sai, có 2 scp là 16 và 25
        for (int i = bd; i <= kt; i++) {
            printf("%d\n", i * i);
        }
    }

    return 0;
}
