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
int main()
{
  int aa, L;
  while(cin >> aa >> L, aa || L) {
    map<int, int> MAP;
    MAP[aa] = 0;
    string a = to_string(aa);
    string A(L, '0');
    FOR(i,0,a.length()) A[i] = a[i];
    FOR(i,1,21) {
      while(A.length() < L) A += '0';
      string mx = A, mn = A;
      sort(mx.rbegin(), mx.rend());
      sort(mn.begin(), mn.end());
      int sa = stoi(mx) - stoi(mn);
      A = to_string(sa);
      if(MAP.count(sa)) {
        cout << MAP[sa] << " " << sa << " " << i - MAP[sa] << endl;
        break;
      } else MAP[sa] = i;
    }
  }
  return 0;
}