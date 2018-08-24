#include <stdio.h>
#include <stdlib.h>

int main()
{
 int numero, numMax=0, numMin=100, i=0, suma=0;
float promedio   ;
    for (;i<10;i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d",&numero);
        suma=suma+numero;

        if (numero>numMax)
        {numMax = numero;}

        if(numero<numMin)
        {numMin= numero;}

    }
    printf("la suma de todos los numeros es: %d\n",suma);
    promedio=(float)suma/10;
    printf("el promedio es: %.2f\n",promedio);

    printf("el numero maximo es: %d\n",numMax);
    printf("el numero minimo es: %d\n",numMin);


    return 0;
}
