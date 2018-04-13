#include <stdio.h>
#include"funciones.h"
#include <string.h>


float suma (float numA, float numB)
{
      float resultado;
      resultado=numA+numB;
      return resultado;

}
float resta (float numA, float numB)
{
      float resultado;
      resultado=numA-numB;
      return resultado;

}
float division (float numA, float numB)
{
      float resultado;
      resultado=numA/numB;
      return resultado;

}
float multiplicacion (float numA, float numB)
{
      float resultado;
      resultado=numA*numB;
      return resultado;

}
float factorial (float numA)
{
    int contador=1;
    if(contador==0)
    {
        contador=1;
    }
    else
    {
    contador=numA-1;
    float acum;
    acum=numA;
    for(; contador>0; contador--)
    {
        acum=acum*contador;

    }
     return acum;
    }

}
