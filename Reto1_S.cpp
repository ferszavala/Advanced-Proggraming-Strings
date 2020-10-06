/*Ejercicio 1. Escribe una función que invierta una cadena. La cadena de entrada se proporciona como una matriz 
de caracteres char [].
No asigne espacio extra, debe hacerlo modificando la matriz de entrada sin declarar otro arreglo (sin aux).*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char i,j;
    char cadena[100];
    char temporal;//solo usamos aux como 1 caracter
    cout<<"Introduce la cadena que deseas invertir: ";
    cin.getline(cadena,100,'\n');
    char l=strlen(cadena);
    for (i=0,j=l-1; i<l/2; i++,j--) //dos for en 1(lo mismo que tener un anidado) los for recorren hasta a mitad de la cadena
    {
        temporal=cadena[i];
        cadena[i]=cadena[j];
        cadena[j]=temporal;
    }
    cout<<"La cadena invertida es: "<<cadena<<endl;
    return 0;
}
