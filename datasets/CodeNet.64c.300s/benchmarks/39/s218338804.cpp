#include<iostream>
using namespace std;

int main(void){
  int n,m;
  m = 0;

  while(cin >> n){
    if( n <= 36) {
      for(int i = 0; i <= 9; i++ ){
	for(int j = 0; j <= 9; j++ ){
	  for(int k = 0; k <= 9; k++ ){
	    if(n - i - j - k >=0 ){
	      if(n - i - j - k <=9){
		m++;
	      }
	    }
	  }
	}
      }
    }
    cout << m << endl;
    m = 0;
  }

  return 0;
}