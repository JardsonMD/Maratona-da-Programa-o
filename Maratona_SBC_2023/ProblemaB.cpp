#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int cartas[N];
    for (int i = 0; i < n; i++) {
        scanf("%d", &cartas[i]);
    }

    int result = 0;

    for (int i = 0; i < n; i++) {
        if (cartas[i] != i + 1) {
            int j = i;
            while (cartas[j] != j + 1) {
                int temp = cartas[j];
                cartas[j] = cartas[temp - 1];
                cartas[temp - 1] = temp;
                result++;
            }
        }
    }

    printf("%d\n", result);

    return 0;
}
