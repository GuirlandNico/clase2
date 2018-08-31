#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

static int getInt(int* pResultado);


int utn_getEntero(int* pNumero, int reintentos,int Min,int Max, char* msg, char* msgErr)
{
    int retorno = -1;
    int auxiliar;

    for(;reintentos > 0;reintentos--)
    {
        printf(msg);
        //if(scanf("%d",&auxiliar) == 1)
        if(getInt(&auxiliar) == 0)
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

static int getInt(int* pResultado)
{ int auxiliar;

 scanf("%d",&auxiliar);

    if (scanf("%d",&auxiliar) == 0)
    { pResultado = 0;
              }
    else
    { pResultado = -1; }

return pResultado;
}

