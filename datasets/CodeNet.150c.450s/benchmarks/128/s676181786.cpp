#include <bits/stdc++.h>
// #include "bits/stdc++.h"

#define pout(n)  printf ("%d\n", n)

#define rep(i,a,n) for (int i = a;i < n;i++)
#define per(i,n,a) for (int i = n-1;i >= a;i--)

const int d4x[4] = {1, 0, -1, 0};
const int d4y[4] = {0, 1, 0, -1};
const int d8x[8] = { 1,1,0,-1,-1,-1,0,1 };
const int d8y[8] = { 0,1,1,1,0,-1,-1,-1 };
 
typedef long long ll;
using namespace std;
 
int main() {
  string s;
  cin >> s;
  
  reverse(s.begin(), s.end());
  cout << s << endl;
  return 0;
}
