#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
  int s = 1, x = 1, y = 1, a, b, ans = -1;
  vector<int> price;
  while(s > 0) {
    cin >> x >> y >> s;
    for(int i = 1; i < s; i++) {
      for(int j = 1; j < s; j++) {
	a = (int) i*(100+x)/100;
	b = (int) j*(100+x)/100;
	if(a+b == s){
	  a = (int) i*(100+y)/100;
	  b = (int) j*(100+y)/100;
	  if(ans < a+b) ans = a+b;
	}
      }
      if(i == s-1){
	cout << ans << endl;
	ans = -1;
      }
    }
  }
  return 0;
}
      