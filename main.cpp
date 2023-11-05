
#include "Definiciones.h"
#include "CCuadrado.h"
#include "CTriangulo.h"
#include "CHexagono.h"

int main()
{
  EnteroSinSigno Opcion;
  TipoNumerico lado;

  CPoligono *pObjeto=nullptr;

  do
  {
    cout << "Seleccione el tipo de poligono que quiere crear \n";
    cout << "1. Triangulo \n";
    cout << "2. Cuadrado \n";
    cout << "3. Hexagono \n";
    cout << "Ingresa el tipo : ";
    cin >> Opcion;
  }while( Opcion<1 || Opcion>3);

  cout <<"Lado : ";
  cin >> lado;
  cout << "\n";
  switch(Opcion)
  {
    case 1:
      pObjeto = new CTriangulo(lado);
      break;
    case 2:
      pObjeto = new CCuadrado(lado);
      break;
    case 3:
      pObjeto = new CHexagono(lado);
  }
  cout << "El semiperimetro es: " << pObjeto->SemiPerimetro() << "\n";
  cout << "El apotema es      : " << pObjeto->Apotema() << "\n";
  cout << "El area es         : " << pObjeto->Area() << "\n";
  delete pObjeto;
  pObjeto = nullptr;
  return 0;
}

