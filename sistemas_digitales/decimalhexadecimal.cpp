#include <iostream>
using namespace std;
int main() {
  int n; //leer el numero en decimal
  int resto; //guardar el resto o modulo
  char hexadecimal[256];
  cin >> n;
  int i=0;
  while (n>0) {
    resto = n%16;
    if(resto>=0 && resto<=9)
      hexadecimal[i] = (char)(resto+48);
    else
      hexadecimal[i] = (char)(resto+55);
    n = n/16;
    i++;
  }
  for (int j=i-1; j >= 0; j--)
    cout << hexadecimal[j];
  cout << '\n';
  return 0;
}
