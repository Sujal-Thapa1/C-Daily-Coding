#include <stdio.h>
int main() {
    int i, j;
    int n = 7;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || i == n / 2) {
                printf("*");
            }else if (j == 0) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
