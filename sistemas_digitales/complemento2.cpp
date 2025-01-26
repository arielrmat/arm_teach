#include <iostream>
using namespace std;
int main() {
  string binario="", complemento2="";
  int posuno; //recorrer desde la derecha y guardar la pos del primer uno
  cin >> binario;
  complemento2 = binario;
  posuno = binario.size()-1;
  while(binario[posuno]!='1' && posuno>=0)
    posuno--;
  for (int i = posuno-1; i >= 0; i--) {
    if(binario[i] == '0')
      complemento2[i]='1';
    else
      complemento2[i]='0';
  }
  cout << complemento2 << '\n';
  return 0;
}
