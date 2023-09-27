#include <iostream>
using namespace std;
int main(){
  int sa=0, sb=0;
  int n;
  for( int i=0;i<4;i++ ){
    cin >> n;
    sa+=n;
  }
  for( int i=0;i<4;i++ ){
    cin >> n;
    sb+=n;
  }
  cout << (sa>sb?sa:sb) << endl;

}