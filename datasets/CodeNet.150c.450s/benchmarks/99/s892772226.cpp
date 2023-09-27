#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

int mcxi_to_i(string s) {
  int ans = 0;
  int keta = 1;
  for(unsigned int i=0; i<s.size(); i++) {
    switch(s[i]) {
    case 'm': ans += 1000 * keta; keta = 1; break;
    case 'c': ans += 100 * keta; keta = 1; break;
    case 'x': ans += 10 * keta; keta = 1; break;
    case 'i': ans += 1 * keta; keta = 1; break;
    default: 
      // cerr << s[i] << endl;
      keta = (int) s[i] - '0';
      // cerr << "keta: " << keta << endl;
      break;
    }
  }
  // cerr << ans << endl;
  return ans;
}

string keta(int x, int waru, string k) {
  int keta = (x%(waru*10))/waru;
  if (keta == 0) return "";
  if (keta == 1) return k;
  stringstream ss;
  ss << keta;
  return ss.str() + k;
}

string i_to_mcxi(int x) {
  return keta(x, 1000, "m") + keta(x, 100, "c") 
    + keta(x, 10, "x") + keta(x, 1, "i");
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    string a, b;
    cin >> a >> b;
    int c = mcxi_to_i(a) + mcxi_to_i(b);
    cout << i_to_mcxi(c) << endl;
  }
}