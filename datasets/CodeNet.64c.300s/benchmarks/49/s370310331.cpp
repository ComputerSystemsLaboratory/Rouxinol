#include<iostream>

using namespace std;

int main(void){
  int i=0,n=0,a,b=0;
  while(cin >> i >> n){
    a = i+n;
    while(a>0){
      a = a/10;
      b++;
  }
    cout << b <<endl;
    b = 0;
  }
}