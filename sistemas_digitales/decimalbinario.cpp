#include <iostream>
using namespace std;
int main() {
  int n; //leer el numero en base decimal
  int binario[32]; //guardar los digitos del numero en base binaria
  cin >> n;
  int i = 0;
  while(n>=2){
    binario[i] = n%2;
    n = n/2;
    i++;
  }
  binario[i] = n;
  for (int j=i; j>=0; j--) {
    cout << binario[j];
  }
  cout << '\n';
  return 0;
}

