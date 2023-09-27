#include <iostream>
using namespace std;
int main(){
  int n ,coin=0;

  while ( 1 ){
    cin >> n;
    if( n == 0 ){
      break;
    }
 
    n = 1000 - n; 
    
    if( n >= 500 ){
      while( n >= 500 ){
	n -= 500;
	coin++;
      }
    }
    
    if( n >= 100 ){
      while( n >= 100 ){
	n -= 100;
	coin++;
      }
    }
  
    if( n >= 50 ){
      while( n >= 50 ){
	n -= 50;
	coin++;
      }
    }
    
    if( n >= 10 ){
      while( n >= 10 ){
	n -= 10;
	coin++;
      }
    }
    
    if( n >= 5 ){
      while( n >= 5 ){
	n -= 5;
	coin++;
      }
    }
    
    if( n >= 1 ){
      while( n >= 1 ){
	n -= 1;
	coin++;
      }
    }
    
    cout << coin << endl;
    coin = 0;
  }
  return 0;
}