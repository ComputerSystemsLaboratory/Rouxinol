#include<iostream>
using namespace std;

int main(void){
  int n, x;

  cin >> n;

  for ( int i = 1; i <= n; i++ ){
    x = i;

    if ( x % 3 == 0 ){
      cout << " " << i;
    }else{
      while(1){
	if ( x % 10 == 3 ){
	  cout << " " << i;
	  break;
	}else if( x / 10 > 0){
	  x /= 10;
	}else{
	  break;
	}
      }
    }
    
  }
  cout << endl;
  
  return 0;
}