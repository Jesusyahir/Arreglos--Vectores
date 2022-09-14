#include <cstdlib>
#include <iostream>
#include <new>

using namespace std;

class Arreglo
{
private:
    int *A1;
    int *Par;
    int n;
    
    
public: 
    Arreglo(int num ) {n=num; A1 = new int [num];Par = new int [num];};
    
    void visualizar();
    void obtenerPares();
    void obtenerImpares();
    void setA1() ;
    void Liberar();
};


void Arreglo::visualizar() 
{
    cout<< "Vectores:" <<endl;
    for (int i=0;i<n;i++)
    {
    cout<< A1[i] <<endl;
    }
    
}

void Arreglo::setA1() 
{
    cout<<"Escribe los "<< n <<"  datos "<<endl;
    for (int i=0;i<n;i++)
    {
    cin>>A1[i];
    }
}

void Arreglo::Liberar() 
{
   delete [] A1;
   delete [] Par;
   
    
}
void Arreglo:: obtenerPares()
{
	 int	p=0;
	for (int i=0;i<n;i++)
    {
   
   		
   			if(A1[i] %2==0)
   			{
	   			Par[p]=	A1[i];
				p=p+1;
		    }
    }
	cout<<"Los numeros pares son:"<<endl;
	for (int i=0;i<p;i++)
    {
    cout<<"["<<Par[i]<<"]"<<endl;
    }	
    
}
void Arreglo:: obtenerImpares()
{
	cout<<"Los numeros impares son:"<<endl;
	for (int i=0;i<n;i++)
    {
   
   		
   			if(A1[i] % 2!=0)
   			{
	   			cout<<A1[i]<<endl;
				
		    }
    }
}

    
