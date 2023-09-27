#include <iostream>
using namespace std;
int main(){
  int x ;
  while(1){
    cin >> x ;
    int total = 0;
    if( x==0 )break;
    int yen500 = 0;
    int yen100 = 0;
    int yen50 = 0;
    int yen10 = 0;
    int yen5 = 0;
    int yen1 = 0;
    x = 1000- x;
    yen500 = x /500 ;
    x = x%500;
    yen100 = x /100;
    x = x%100;
    yen50 = x / 50 ;
    x = x %50;
    yen10 = x/10;
    x = x%10;
    yen5 = x/5;
    x = x%5;
    yen1 = x;
    total = yen500 + yen100 + yen50 + yen10 + yen1 + yen5;
    cout << total << endl;
  }
}