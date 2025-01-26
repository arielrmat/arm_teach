#include <iostream>
using namespace std;
int main() {
  string binario="", complemento1="";
  cin >> binario;
  for (int i = 0; i < (int)binario.size() ; i++) {
    if (binario[i]=='1')
      complemento1 += '0';
    else
      complemento1 += '1';
  }
  cout << complemento1 << '\n';
  
  return 0;
}
