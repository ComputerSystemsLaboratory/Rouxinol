#include <iostream>

using namespace std;
int a[5000], b[5000], c[5000];

int main(){
  int n;
  while(cin >> n && n){
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }

    if(n == 1){
      
      cout << a[0] << endl;
    }else{

      b[0] = a[0];
      for(int i = 1; i < n; i++){
	b[i] = b[i-1] + a[i];
      }

      c[0] = b[0];
      for(int i = 1; i < n; i++){
	c[i] = min(c[i-1], b[i]);
      }

      int ans = a[0];
      for(int i = 1; i < n; i++){
	ans = max(ans, b[i] - c[i-1]);
	ans = max(ans, b[i]);
      }
      cout << ans << endl;
    }
  }
}