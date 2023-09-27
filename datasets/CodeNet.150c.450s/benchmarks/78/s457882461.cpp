#include <iostream>
using namespace std;

int dpt1[1000001];
int dpt2[1000001];
bool dpb1[1000001];
bool dpb2[1000001];
int tr[1000];
int sq[1000];

int dp1(int s) {
  if(dpb1[s])
    return dpt1[s];

  int m = 1000111000;
  int r;
  for(int i=1; i < 1000; i++) {
    if(s-sq[i] < 0) break;
    r = dp1(s-sq[i]);
    if(r < m) m = r;
  }

  dpt1[s] = m + 1;
  dpb1[s] = true;
  return m + 1;
}

int dp2(int s) {
  if(dpb2[s])
    return dpt2[s];

  int m = 1000111000;
  int r;
  for(int i=1; i < 1000; i++) {
    if(s-sq[i] < 0) break;
    if(sq[i]%2 == 0)
      continue;
    r = dp2(s-sq[i]);
    if(r < m) m = r;
  }

  dpt2[s] = m + 1;
  dpb2[s] = true;
  return m + 1;
}

int main() {

  for(int i=1; i < 1000; i++) {
    tr[i] = tr[i-1] + i;
    sq[i] = sq[i-1] + tr[i];
  }
  dpt1[0] = 0;
  dpb1[0] = true;
  dpt2[0] = 0;
  dpb2[0] = true;
  int n;
  for(int i=1;i<=1000000;i++)
    dp1(i),dp2(i);
  while(cin >> n, n) {
    cout << dp1(n) << " " << dp2(n) << endl;
  }

  return 0;
}