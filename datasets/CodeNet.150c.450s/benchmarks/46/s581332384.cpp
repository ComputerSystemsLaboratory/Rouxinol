#include<iostream>
using namespace std;

int main(void){
  int n, x, count = 0;

  cin >> n >> x;
  while( n != 0 || x != 0 ){
    for( int i = 1; i <=  n-2; i++ ){
      for( int j = i+1; j <= n-1; j++){
	if( x-i-j > j && x-i-j <= n ){
	  count++;
	}
      }
    }
    cout << count << endl;

    count = 0;
    cin >> n >> x;
  }
  
  return 0;
}