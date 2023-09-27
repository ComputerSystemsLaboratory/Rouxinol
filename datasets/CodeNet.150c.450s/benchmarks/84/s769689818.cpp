#include <bits/stdc++.h>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define PI 3.14159265358979323846
#define vl vector<long long>
using namespace std;
using ll = long long;
using ld = long double;

// ----本問について----
// 問題：
// 問題文URL：
// ------------------

// ----ここから本問のソースコード----

// グローバル変数（入力）
ll n;
vl A, copyA;

ll MergeCount(ll l, ll r) { // [l,r)
  if (r == l + 1) { return 0; }
  if (r == l + 2) {
    if (A[l] > A[l + 1]) {
      swap(A[l], A[l + 1]); // 2個でソート
      return 1;
    }
    return 0;
  }
  ll m = (l + r) / 2;
  ll cl = MergeCount(l, m);
  ll cr = MergeCount(m, r);
  ll c = 0;

  // 最初はソートせずこれでよくね？と思ったがTLEしてしまった．
  /*
  for (int i=l; i<m; i++){
    for (int j=m; j<r; j++){
      if (A[i]>A[j]){
        c++;
      }
    }
  }
  */

  // ソートされていることを利用して楽に数えつつ，マージ
  ll i = l, j = m;
  // copyA = A; // TLEの原因！
  copy(A.begin() + l, A.begin() + r, copyA.begin() + l);
  ll index = l;

  // これもTLEした．（copyA = A;が原因なので後々これでもAC）
  ll temp = 0;
  while (i < m) {
    // iを固定してjがどこまでいけるか
    while (j < r && copyA[i] > copyA[j]) {
      A[index++]=copyA[j];  // マージ
      j++;
      temp++;
    }
    A[index++]=copyA[i];  // マージ
    c += temp;
    i++;
  }
  // j側の余ったやつをマージ．
  while (j<r){
    A[index++]=copyA[j++];
  }
  
  /*
  while (i < m && j < r) {
    if (copyA[i] > copyA[j]) {
      A[index++] = copyA[j++];
      c += m - i;
    } else {
      A[index++] = copyA[i++];
    }
  }
  // i側のあまりをマージ
  while (i < m) {
    A[index++] = copyA[i++];
  }
  // j側のあまりをマージ
  while (j < r) {
    A[index++] = copyA[j++];
  }
  */

  // cout << "MergeCount(" << l << ", " << r << ") = " << cl << "+" << cr << "+"
  // << c << "=" << cl + cr + c << endl;
  return cl + cr + c;
}

void solve() { cout << MergeCount(0, n) << endl; }

int main() {
  cin >> n;
  rep(i, n) {
    ll a;
    cin >> a;
    A.push_back(a);
  }
  copyA = A;
  solve();
  return 0;
}

