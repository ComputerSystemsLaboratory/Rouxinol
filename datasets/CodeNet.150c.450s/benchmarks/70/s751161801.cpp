#include <iostream>
#include <string>
using namespace std;
 
int main(){
  string y[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
  int num[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
 
  while(1){
    int m,d;
    cin >> m >> d;
    if( m == 0 && d == 0 ) break;
    while( m != 0 ){
      d += num[m-1];
      m--;
    }
    cout << y[d%7] << endl;
  }
 
  return 0;
}