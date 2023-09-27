#include <bits/stdc++.h>
#define rep(i,N) for (int i = 0; i < (N); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main(void){
  int N;
  cin >> N;
  vector <string> S(N);
  rep(i,N) cin >> S[i];

  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;

  rep(i,N){
    if (S[i] == "AC") ac++;
    if (S[i] == "WA") wa++;
    if (S[i] == "TLE") tle++;
    if (S[i] == "RE") re++;
  }

  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}
