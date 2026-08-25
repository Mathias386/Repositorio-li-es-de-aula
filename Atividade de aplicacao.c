#include <stdio.h>
#define PI 3.1415

int main()
{
    float raio, area;
    printf("Por favor, insira a medida do raio aqui, em cm: \n");
    scanf("%f", &raio);
    area = 2*PI*raio;
    printf("area do seu perimetro sera = %.2f\ncm",area);
    return 0;
    
}