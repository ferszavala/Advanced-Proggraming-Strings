/*Dada un arreglo de caracteres, devuelva su versión comprimida. La longitud después de la compresión siempre 
debe ser menor o igual al arreglo original. Cada elemento de la matriz debe ser un carácter (no int) de longitud 
1*/
#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
    string cadena;
    int c=1;
    cout<<"Ingresa la cadena que deseas analizar: "; cin>>cadena;   

    for (int i=0;i<cadena.length();i++)
    {
        if(cadena[i]!=' ')
        {
            for(int j=i+1;j<cadena.length();j++)
            {
                if (cadena[i]==cadena[j])
                {
                    c++;
                    cadena[j]=' ';
                }
            }
        }
        if(cadena[i]!=cadena[i+1] && c>1)
        {
            cadena = cadena + cadena[i+1];
            for(int k=cadena.length()-1;k>i;k--)
            {
                cadena[k+1]=cadena[k];
            }
        }

        if (c>1)
        {
            if(c>9)
            {
                cadena+=cadena[i+1];
                for(int k=cadena.length()-1;k>i;k--)
                {
                    cadena[k+1]=cadena[k];
                }
                cadena[i+1]=c/10 +'0';
                cadena[i+2]=c%10 +'0';
            }
            else
            {
                cadena[i+1]=c+'0';
            }           
        }
        c=1;
    }
    for (int i=0;i<cadena.length();i++)
    {
        if(cadena[i]==' ')
        {
            cadena[i]=NULL;
        }
    }
    cout<<"[";
    for (int i=0;i<cadena.length();i++)
    {
        cout<<cadena[i]<<" ";
    }  
    cout<<"]";
    return 0;
}