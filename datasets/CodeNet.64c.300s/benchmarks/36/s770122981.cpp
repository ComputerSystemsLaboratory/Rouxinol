#include <iostream>
using namespace std;

int max(int a, int b){
  if(a>b) return a;
  else return b;
}

int min(int a, int b){
  if(a<b) return a;
  else return b;
}

int main(){

  int a,b,c;
  cin >> a >> b >> c;
  int d =max(a,max(b,c));
  int e =min(a, min(b,c));
  int f =a+b+c-d-e;
  
  cout << e << " " << f << " " << d << endl;
  
  return 0;
}