#include <stdio_ext.h>
#include <stdlib.h>

int getEntero(int* pNumero, int reintentos,int Min,int Max, char* msg, char* msgErr);

int main()
{
    int Numero;
    if (getEntero(&Numero,4, 10, 250,"Ingrese Numero: ", "NUMERO INVALIDO\n") == 0)
    {
        printf("El Numero es: %d",Numero);
    }

    return 0;
}


int getEntero(int* pNumero, int reintentos,int Min,int Max, char* msg, char* msgErr)
{
    int retorno = -1;
    int auxiliar;

    for(;reintentos > 0;reintentos--)
    {
        printf(msg);
        if(scanf("%d",&auxiliar) == 1)
        {
            if(auxiliar >= Min && auxiliar < Max)
            {
                *pNumero = auxiliar;
                retorno = 0;
                break;
            }
            else
            {
                printf("El numero esta fuera de rango [10-250]\n");
            }
        }
        else
        {
            printf(msgErr);
            __fpurge(stdin);
        }
    }
    return retorno;
}
