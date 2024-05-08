#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int N;
    scanf("%d", &N);

    int caminhos[N - 1];
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &caminhos[i]);
    }

    int curtidas[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &curtidas[i]);
    }

    int fotos[N - 1];
    fotos[0] = 0; // Não há fotos entre o marco 1 e o marco 2

    for (int i = 1; i < N - 1; i++) {
        int anterior = fotos[i - 1];
        int atual = 0;

        // Verifica se tirar uma foto no marco i é vantajoso
        if (curtidas[i] > anterior) {
            atual = max(atual, anterior + 1);
        }

        // Calcula o número máximo de fotos até o marco i
        for (int j = caminhos[i - 1] - 1; j < i; j++) {
            if (curtidas[i] > curtidas[j]) {
                atual = max(atual, fotos[j] + 1);
            }
        }

        fotos[i] = atual;
    }

    // Imprime o resultado
    for (int i = 0; i < N - 1; i++) {
        printf("%d ", fotos[i]);
    }

    return 0;
}
