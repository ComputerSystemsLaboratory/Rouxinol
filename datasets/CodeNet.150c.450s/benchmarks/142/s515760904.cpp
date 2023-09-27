#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, k;
  cin >> n >> k;
  vector<ll> score(n);
  rep(i, n) cin >> score[i];

  rep(i, n - k) {
    //cout << score[1] << ':' << score[k+i] << '=';
    if(score[i] < score[k + i]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
