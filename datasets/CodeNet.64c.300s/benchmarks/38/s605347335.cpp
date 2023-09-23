#include <iostream>
using namespace std;
int main(void){
  int N,t,B,C,i,j;
  cin >> N;
  for(i = 0 ; i < N ; i++){
    bool is = true;
    for( B = 0, C = 0, j = 0; j < 10; j++){
      cin >> t;
      if(B >= t && C >= t) is = false;
      if(is){
	if(B < t && C < t){
	  if(B < C) C = t;
	  else B = t;
	}
	else if(B < t) B = t;
	else if(C < t) C = t;
      }
    }
    if(is) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}