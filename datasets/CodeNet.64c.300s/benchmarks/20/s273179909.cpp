#include <iostream>

using namespace std;

int func(int x){
  return x*x;
}

int main(void){

  int d;
  int sum;
  while( cin >> d ){
    sum = 0;
    for( int i = 0 ; i < 600/d ; i++ ){
      sum += func(i*d) * d;
    }
    cout << sum << endl;
  }
  return 0;
}