#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int i,data[10];
  for( i = 0; i < 10; i++ ){
    cin >> data[i];
  }

  for( i = 0; i < 10; i++ ){
    for ( int j = 0;j < 9; j++ ){
      if ( data[j] < data[j+1]) swap(data[j],data[j+1]);
    }
  }

  for( i = 0; i < 3; i++ ) cout << data[i] << endl;
  return 0;
}