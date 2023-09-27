#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++){
    cin >> S[i];
  }
  ll A=0, W=0, T=0, R = 0;
  for (int i = 0; i<N; i++){
    if (S[i] == "AC") A++;
    if (S[i] == "WA") W++;
    if (S[i] == "TLE") T++;
    if (S[i] == "RE") R++;
  }
  cout << "AC" << ' ' << 'x' << ' '<< A << endl;
  cout << "WA" << ' ' << 'x' <<' '<< W << endl;
  cout << "TLE" << ' ' << 'x' << ' ' << T << endl;
  cout << "RE" << ' '  << 'x' << ' ' <<R << endl;
  return 0;
}