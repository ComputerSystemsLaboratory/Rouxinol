#include<iostream>
using namespace std;
int main(){
  int x, y, s, ans;
  while (cin >> x >> y >> s, x||y||s){
    ans = 0;
    for (int i = 1; i < s; ++i){
      for (int j = 1; j < s; ++j){
	if (i*(100+x)/100 + j*(100+x)/100 == s){
	  ans = max(ans, i*(100+y)/100 + j*(100+y)/100);
	}else if (i*(100+x)/100 + j*(100+x)/100 > s) break;
      }
    }
    cout << ans << endl;
  }
  return 0;
}