#include <stdio.h>
#include <stdlib.h>

//1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y devuelva el valor del producto con un descuento del 5%.
//Realizar la llamada desde el main

//Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena
//Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array de dicha estructura por marca. Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main.

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
