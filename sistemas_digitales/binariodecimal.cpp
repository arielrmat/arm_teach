#include <iostream>
using namespace std;
int main() {
  int binario;
  int potencia=1, digito;
  int decimal = 0;
  cin >> binario;
  while (binario>0) {
    digito = binario % 10; //extraemos el ultimo digito del num binario (derecha)
    if (digito !=0)
      decimal += (digito*potencia);
    potencia = potencia*2;
    binario = binario / 10; //del numero binario quitamos el digito extraido
  }
  cout << decimal << '\n';
  return 0;
}
