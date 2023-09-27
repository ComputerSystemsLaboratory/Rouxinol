#include <iostream>
#include <climits>
using namespace std;
int s[2];
int main(){
  int n, a;
  while(cin >> n, n){
    int ans = -(INT_MAX-1);
    for(int i = 0 ; i < n ; i++){
      cin >> a;
      if(i == 0)s[0] = a;
      else{
	s[1] = max(a, a + s[0]);
	s[0] = s[1];
      }
      ans = max(ans, s[0]);
    }
    cout << ans << endl;
  }
  return 0;
}