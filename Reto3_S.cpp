/*Ejercicio 3. Dada una cadena, busque el primer carácter no repetido en ella y devuelva su índice, tenga en 
cuenta mayúsculas y minúsculas son diferentes. Si no existe, devuelve -1.
s = "loveIIA"
return 0.*/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char cadena[100];
int c[10]={0};
cout<<"Ingresa la cadena deseada: "; cin>>cadena;
int l = strlen(cadena);
c[l]={0};
for (int i=0;i<strlen(cadena);i++)
{
    char aux=cadena[i];
    for(int j=0;j<strlen(cadena);j++)
    {
        if(j!=i)
        {
            if(aux==cadena[j])
            {
                c[i]++;
            }
        }
    }
}

for (int i=0;i<strlen(cadena);i++)
{
    if (c[i]==0)
    {
    cout<<cadena[i];
    return 0;
    }
}

return 0;
}