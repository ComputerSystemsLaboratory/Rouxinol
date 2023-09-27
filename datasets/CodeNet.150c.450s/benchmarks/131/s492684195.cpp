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

int L;
int calc(vector<char> a, vector<char> b) {
  int aa = 0, bb = 0;
  for(int i = L - 1; i >= 0; i--) {
    aa += a[i] * pow(10, L - 1 - i);
    bb += b[i] * pow(10, L - 1 - i);
  }
  return aa - bb;
}

vector<char> i2vc(int x) {
  vector<char> ret(L, '0');
  for(int i = L - 1; i >= 0; i--) {
    ret[i] = to_string(x % 10)[0];
    x /= 10;
  }
  return ret;
}

int main()
{
  int aa;
  while(cin >> aa >> L, aa || L) {
    map<int, int> MAP;
    MAP[aa] = 0;
    string a = to_string(aa);
    vector<char> A(L, '0');
    FOR(i,0,a.length()) A[i] = a[i];
    FOR(i,1,21) {
      vector<char> mx = A, mn = A;
      sort(mx.rbegin(), mx.rend());
      sort(mn.begin(), mn.end());
      int sa = calc(mx, mn);
      A = i2vc(sa);
      if(MAP.count(sa)) {
        cout << MAP[sa] << " " << sa << " " << i - MAP[sa] << endl;
        break;
      } else MAP[sa] = i;

    }
  }
  return 0;
}