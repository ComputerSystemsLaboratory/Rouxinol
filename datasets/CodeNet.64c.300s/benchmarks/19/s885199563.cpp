#include <iostream>
#include <climits>
using namespace std;
int s[5010];
int main(){
  int n, a;
  while(cin >> n, n){
    int ans = -(INT_MAX-1);
    for(int i = 0 ; i < n ; i++){
      cin >> a;
      if(!i)s[i] = a;
      else{
	s[i] = max(a, a + s[i-1]);
      }
      ans = max(ans, s[i]);
    }
    cout << ans << endl;
  }
  return 0;
}