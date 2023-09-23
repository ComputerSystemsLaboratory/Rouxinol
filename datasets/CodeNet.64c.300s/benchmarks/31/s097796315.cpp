#include <iostream>
using namespace std;
int main(){
  int mem ,student[31]={};
  for( int i=0 ; i<28 ; i++ ){
    cin >> mem;
    student[mem] = 1;
  }

  for( int i=1 ; i<=30 ; i++ ){
    if( student[i] == 0 ){
      cout << i << endl;
    }
  }
}