#include<iostream>
using namespace std;
class ClaseBase
{
protected:
int unaVar = 0;
public:
ClaseBase(int x):unaVar(x){}
void unMetodo(void)
{
cout<<"unaVar = "<<unaVar<<endl;
}
};
class ClaseDerivada : public ClaseBase
{
public:
ClaseDerivada(int x):ClaseBase(x){} /* Ejecuci�n del constructor de la clase base para
inicializar a unaVar */
};
int main()
{
ClaseDerivada obj1(50); /* Aqu� el constructor de la clase derivada invoca el
constructor de la clase base */
obj1.unMetodo();
return 0;
}
