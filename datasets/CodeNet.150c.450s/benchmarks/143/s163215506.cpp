#include <bits/stdc++.h>
#define rep(i,N) for (int i = 0; i < (N); ++i)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int inf{int(1e9)};
int main(void){
  int N;
  cin >> N;

  vector <ll> num(100001);  //値がiの要素が出てきた回数
  rep(i,N){
    int A;
    cin >> A;
    num[A] ++;
  }
  ll total = 0;
  rep(i,100001) total += i * num[i];
  int Q;
  cin >> Q;

  rep(i,Q){
    int B, C;
    cin >> B >> C;
    total += num[B] * (C - B);
    //B_i全てをC_iに置き換える
    num[C] += num[B];
    num[B] = 0;
    cout << total << endl;
  }
}
