#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[]){
  int a,b,c,i,j = 0,mod;
  cin >> a;
  cin >> b;
  cin >> c;
  for(i = a;i <= b;i++){
    mod = c % i;
    if(!mod){
      j++;
    }
  }
  cout << j << endl;
  return 0;
}