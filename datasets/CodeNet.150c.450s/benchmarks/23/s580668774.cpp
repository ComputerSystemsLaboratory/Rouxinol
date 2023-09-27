#include <iostream>
#define NIL -1
using namespace std;
int f[45] = {};

int fib(int n){
  if(n == 0 || n == 1){
    //cout << "a;n = " << n << " " << "f[n] = " << f[n] << endl;
    return f[n] = 1;
  }
  if(f[n] != NIL){
    //cout << "b;n = " << n << " " << "f[n] = " << f[n] << endl;
    return f[n];
  }
  //cout << "c;n = " << n << " " << "f[n] = " << f[n] << endl;
  return f[n] = fib(n - 1) + fib(n - 2);
}

int main(){

  int n;
  cin >> n;

  for(int i = 0;i < 45;i++) f[i] = NIL;

  cout << fib(n) << endl;

}