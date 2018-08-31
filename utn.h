#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/**
    utn_getEntero : pide un entero al usuario
    @param  pNumero: puntero a edad
    @param reintentos: cantidad de reintentos
    @return : 0 ok, -1 error.


*/
int utn_getEntero(int* pNumero, int reintentos,int Min,int Max, char* msg, char* msgErr);


#endif // UTN_H_INCLUDED
