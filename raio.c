#include <stdio.h>
#define PI 3.14159

int main()
{
        float raio, area;
        printf("Darias uma digitada no meu raio?: ");
        scanf("%f", &raio);
        area = PI*raio*raio;
        printf ("area = %.2f\n", area);
        return 0;
}