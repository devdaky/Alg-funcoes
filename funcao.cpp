#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void calcularHMS(int totalSegundos, int *h, int *m, int *s) {
    *h = totalSegundos / 3600;
    *m = (totalSegundos % 3600) / 60;
    *s = totalSegundos % 60;
}

bool isPar(int num) {r
    return num % 2 == 0;
}

bool isImpar(int num) {
    return num % 2 != 0;
}

float media(float n1, float n2) {
    return (n1 + n2) / 2;
}

float maior(float n1, float n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}

float menor(float n1, float n2) {
    if (n1 < n2) {
        return n1;
    } else {
        return n2;
    }
}

int main() {

    int segundos, h, m, s;
    int numero;
    float n1, n2;

    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);

    calcularHMS(segundos, &h, &m, &s);

    printf("Horario: %02d:%02d:%02d\n\n", h, m, s);

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (isPar(numero)) {
        printf("O numero %d e PAR.\n", numero);
    } else {
        printf("O numero %d NAO e PAR.\n", numero);
    }

    if (isImpar(numero)) {
        printf("O numero %d e IMPAR.\n\n", numero);
    } else {
        printf("O numero %d NAO e IMPAR.\n\n", numero);
    }

    
    printf("Digite dois numeros: ");
    scanf("%f %f", &n1, &n2);

    printf("Media: %.2f\n", media(n1, n2));


    printf("Maior numero: %.2f\n", maior(n1, n2));
    printf("Menor numero: %.2f\n", menor(n1, n2));

    system("pause");

    return 0;
}
