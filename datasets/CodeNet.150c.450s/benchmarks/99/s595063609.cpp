#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int mystoi(string s) {
  stack<int> st;
  FOR(i,0,4) st.push(1);
  int ret = 0;
  FOR(i,0,s.length()) {
    if(s[i] >= '2' && s[i] <= '9') {
      st.push(s[i]-'0');
    } else {
      if(s[i] == 'm') ret += 1000 * st.top();
      if(s[i] == 'c') ret += 100 * st.top();
      if(s[i] == 'x') ret += 10 * st.top();
      if(s[i] == 'i') ret += st.top();
      st.pop();
    }
  }
  return ret;
}

string myitos(int x) {
  string ret = "";
  if(x % 10 == 1) ret = 'i' + ret;
  else if(x % 10 > 1) ret = to_string(x % 10) + 'i' + ret;
  x /= 10;
  if(x % 10 == 1) ret = 'x' + ret;
  else if(x % 10 > 1) ret = to_string(x % 10) + 'x' + ret;
  x /= 10;
  if(x % 10 == 1) ret = 'c' + ret;
  else if(x % 10 > 1) ret = to_string(x % 10) + 'c' + ret;
  x /= 10;
  if(x % 10 == 1) ret = 'm' + ret;
  else if(x % 10 > 1) ret = to_string(x % 10) + 'm' + ret;
  return ret;
}

int main()
{
  int n; cin >> n;
  while(n--) {
    string a, b;
    cin >> a >> b;
    int aa = mystoi(a);
    int bb = mystoi(b);
    cout << myitos(aa + bb) << endl;
  }
  return 0;
}