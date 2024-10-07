#include <stdio.h>

int main() {

    float km;
    float litros;
    float kmPorlitro; 

    printf("Informe quantos km vc percorreu: ");
    scanf("%f", &km);

    printf("Informe quantos litros foram gastos: ");
    scanf("%f", &litros);

    kmPorlitro = km/litros ;
    printf("%f",kmPorlitro);
 
}