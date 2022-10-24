#include <stdio.h>
#include <stdlib.h>

//1. Crear una funci�n llamada aplicarDescuento que reciba como par�metro el precio de un producto y devuelva el valor del producto con un descuento del 5%.
//Realizar la llamada desde el main

//Crear una funci�n que se llame contarCaracteres que reciba una cadena de caracteres como primer par�metro y un car�cter como segundo y devuelva la cantidad de veces que ese car�cter aparece en la cadena
//Dada la estructura Notebook(id, procesador, marca, precio) generar una funci�n que permita ordenar un array de dicha estructura por marca. Ante igualdad de marca deber� ordenarse por precio. Hardcodear datos y mostrarlos desde el main.

typedef struct
{

    int id;
    char marca[20];

} notebook;

int aplicarDescuento(int valor);
int contarCaracteres(char caracteres[],char caracter);

int main()
{
    int precio=5000;
    int x;



    aplicarDescuento(5000);

    x=contarCaracteres("hola munda",'a');

    printf("%d",x);



    return 0;
}

int aplicarDescuento(int valor)
{
    int descuento;
    int precioFinal;

    descuento= (valor * 5)/100;

    precioFinal = valor - descuento;


    return precioFinal;

}

int contarCaracteres(char caracteres[],char caracter)
{
    int contadorCaracteres=0;

    if(caracteres != NULL)
    {
        for(int i=0;i<10; i++)
        {
            if(caracteres[i]==caracter)
            {
                contadorCaracteres++;
            }
        }
    }

    return contadorCaracteres;



}
