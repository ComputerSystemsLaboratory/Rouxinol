#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
  int e;
  while(cin >> e, e){
    int ans = e+1;
    for(int i = 0 ; i*i*i <= e ; i++){
      for(int j = 0 ; j*j <= e-i*i*i ; j++){
	int k = e-i*i*i-j*j;
	ans = min(ans, i+j+k);
      }
    }
    cout << ans << endl;
  }
  return 0;
}