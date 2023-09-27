#include <iostream>
using namespace std;

int main(){
  int n, t, ans, f;
  string s;
  while (cin >> n, n){
    ans = 0;
    t = 0;
    f = 2;
    for (int i = 0; i < n; ++i){
      cin >> s;
      if (s == "lu" || s == "ru") ++t;
      else --t;
      if (t == f){
	++ans;
	f = (f+2)%4;
      }
    }
    cout << ans << endl;
  }
  return 0;
}