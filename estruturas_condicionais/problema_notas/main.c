#include <stdio.h>
#include <stdlib.h>

int main() {

    double nota1, nota2, somaNotas;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    somaNotas = nota1 + nota2;

    printf("Nota final igual a %.2lf", somaNotas);
    if (somaNotas < 60.0){
        printf("\nREPROVADO");
    } else {
        printf("\nAPROVADO");
    }

    return 0;
}
