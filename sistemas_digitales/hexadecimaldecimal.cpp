#include <iostream>
using namespace std;
int main() {
  string hexadecimal; //Almacenar el numero hexadecimal
  int potencia = 1; //almacenar el valor de la potencia de 16
  int digito; //guardar cada digito extraido
  int decimal = 0; //guardar el numero convertido a sistema decimal
  cin >> hexadecimal;
  for (int i = hexadecimal.size()-1; i >= 0; i--) {
    digito = (int)hexadecimal[i];
    if(digito>=65 && digito<=70)
      decimal = decimal + ((digito-55)*potencia);
    else
      decimal = decimal + ((digito-48)*potencia);
    potencia = potencia*16;
  }
  cout << decimal << '\n';
  return 0;
}
