#include <iostream>
using namespace std;

int main(){
    int a=5, b;
    while(cin >> a >> b){
    a += b;
    b = 0;
    while(a / 10 > 0){
     a /= 10;
     b++;
    }
    cout << b + 1<< endl;
  }
 return 0;
}