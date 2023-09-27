#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  int n, taro = 0, hanako = 0;
  cin >> n;
  string t, h;
  for (int i = 0; i < n; i ++) {
    cin >> t >> h;
    if (t > h) taro += 3;
    else if (t == h) taro ++, hanako ++;
    else if (t < h) hanako += 3;
  }

  cout << taro << " " << hanako << endl;
}
