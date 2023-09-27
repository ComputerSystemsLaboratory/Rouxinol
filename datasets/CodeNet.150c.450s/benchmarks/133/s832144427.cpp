#include <bits/stdc++.h>
#define int long long
#define double long double
using namespace std;
const int MOD = 1000000007;
const int INF = 1e15;
using Graph = vector<vector<int>>;

signed main() {
  int D;
  cin >> D;
  vector<int> down(27);
  for( int i = 1; i <= 26; i++ ) cin >> down[i];

  //各コンテストの満足度
  vector<vector<int>> contest(D+1, vector<int>(27));
  for( int i = 1; i <= D; i++ ){
    for( int j = 1; j <= 26; j++ ) cin >> contest[i][j];
  }

  vector<int> T(D+1);
  for( int i = 1; i <= D; i++ ) cin >> T[i];

  //各コンテストを最後に実施した日
  vector<int> last(27);

  int now = 0;
  for( int d = 1; d <= D; d++ ){
    last[T[d]] = d;
    now += contest[d][T[d]];
    //満足度を下げる
    for( int i = 1; i <= 26; i++ ){
      now -= down[i]*(d-last[i]);
    }
    cout << now << endl;
  }

}
