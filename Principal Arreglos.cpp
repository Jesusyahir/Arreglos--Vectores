#include "Vectores.h"
#include <cstdlib>
#include <iostream>

using namespace std;

 
int main (int argc, char * arg[])
{
   int c;
    cout<< "EXAMEN"<<endl;
    cout<<"¿Cuantos datos deseas INGRESAR?"<<endl;
    cin>>c;
    Arreglo Pro(c);
    
    Pro.setA1();
    system("pause");
	Pro.visualizar();
    
   Pro.obtenerPares();
   Pro.obtenerImpares();
    Pro.Liberar() ;
    
    getchar();
    system("pause");
    return 0;
}
