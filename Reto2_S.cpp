/*Dada una serie de palabras en cadena. Devuelve todas las cadenas de palabras que son subcadenas de otra 
palabra en cualquier orden. La cadena de palabras [i] es una subcadena de palabras [j], si se puede obtener 
eliminando algunos caracteres al lado izquierdo y / o derecho de las palabras [j].
Input: words = ["mass","as","hero","superhero"]
Output: ["as","hero"]
Explanation: "as" es un subtring de "mass" y "hero" de "superhero".*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
    int cantidad;
    char cadena[10]; 
    cout<<"Ingresa la cantidad de palabras que deseas que contenga tu cadena: "; cin>>cantidad;
    char words[1000][1000];
    words[cantidad][cantidad]; 
    cout<<"Escribe las "<<cantidad<<" palabras separadas por un salto de linea. "<<endl; 
    cin.getline(cadena,10,'\n');
    for(int i=0; i<cantidad; i++)
    {
        cin.getline(words[i],1000,'\n');
    }
    cout<<"Las palabras que están contenidas en otras son: ";
    for(int i=0; i<cantidad; i++)
    {
        for(int j=0; j<cantidad; j++)
        {
            if(i!=j)
            {
	            char *dir = strstr(words[i], words[j]);
	            if(dir!=NULL) //que lo que esta en esa direccion no es nulo o sea que si coincide
                {
	                cout<<words[j]<<" ";
                }
            }
        }
    }

    return 0;
}