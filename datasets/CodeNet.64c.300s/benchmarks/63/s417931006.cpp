#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
 long long int a, b, c, temp, min, A, B;
 while(cin >> a >> b){
  if(a == 0){
    cout << "0" << " " << "0" << endl;
  }
  else if(b == 0){
    cout << "0" << " " << "0" << endl;
  }
  else if(a < b){
    temp = a;
    a = b;
    b = temp;

    A = a;
    B = b;

    while(1){
      c = A % B;
      if(c == 0) break;
      else if(c != 0){
        A = B;
        B = c;
      }
    }
    min = (a / B) * b;
    cout << B << " " << min << endl;
  }

    
  else if (a > b){
    A = a;
    B = b;

    while(1){
      c = A % B;
      if(c == 0) break;
      else if(c != 0){
        A = B;
        B = c;
      }
    }
    min = (a / B) * b;
    cout << B << " " << min << endl;
  }
  else if(a == b){
    cout << a << " " << a << endl;
  }

 }
 return 0; 
}