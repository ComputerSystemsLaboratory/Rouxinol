#include <iostream>

using namespace std;

int student[31];

int main(){
  int n;
  for( int i = 1 ; i <= 30 ; i++  ){
  student[i] = 0;
  }
  while( cin >> n ) student[n] = 1;
  for( int i = 1 ; i <= 30 ; i++ ){
    if( !(student[i]) ) cout << i << endl;
  }
}