#include<iostream>
using namespace std;

int sum( int num ){

  int count = 0;
  for( int a = 0; a < 10; a++ ){
    for( int b = 0; b < 10; b++ ){
      for( int c = 0; c < 10; c++ ){
	for( int d = 0; d < 10; d++ ){
	  if( a+b+c+d == num ){
	    count++;
	  }
	}
      }
    }
  }

  return count;

}

int main(){

  int num;

  while( cin >> num ){
    cout << sum(num) << endl;
  } 

  return 0;
}