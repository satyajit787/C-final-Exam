#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = n - i; j > 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
