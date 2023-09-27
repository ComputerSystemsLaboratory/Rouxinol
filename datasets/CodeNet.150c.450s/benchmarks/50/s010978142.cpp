#include <iostream>

using namespace std;

int n,a,b,c,d,e,f;

int main(void){

  while( cin >> n , n ){

    n = 1000 - n;
    a = b = c = d = e = f = 0;

    while( n >= 500 ){
      a++;
      n -= 500;
    }
    while( n >= 100 ){
      b++;
      n -= 100;
    }
    while( n >= 50 ){
      c++;
      n -= 50;
    }
    while( n >= 10 ){
      d++;
      n -= 10;
    }
    while( n >= 5 ){
      e++;
      n -= 5;
    }
    while(n){
      f++;
      n--;
    }
    cout << a + b + c + d + e + f << endl;
  }
  return 0;
}