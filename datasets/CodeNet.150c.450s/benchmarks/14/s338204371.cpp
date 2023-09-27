#include <bits/stdc++.h>
using namespace std;

int main(){
  int i = 1, n;
  cin >> n;

  for(int k=0; k < n; ++k){
    int x = i;
    if( x % 3 == 0){
      cout << " " << i;
    }else if( x % 10 == 3 ){
      cout << " " << i;
    }else while( x /= 10 ){
	if ( x % 10 == 3 && i % 3 != 0 ){
	  cout << " " << i;
	  break;
	}
      }

    
    ++i;
  }
  cout << endl;
  

  return 0;
}

