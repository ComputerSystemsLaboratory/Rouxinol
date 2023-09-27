#include <bits/stdc++.h>
#define ll long long
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;

//定数
//円周率
const double pi = 3.141592653589793238462643383279;
//天井
const int INF = 1000000000; // = 10^9
const ll LINF = 1000000000000000; // = 10^15
//ABC文字列
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZABC";
const string abc = "abcdefghijklmnopqrstuvwxyzabc";
//よくあるmodくん
const ll MOD = 1000000007; // = 10^9 + 7

//データ構造
//隣接リスト用構造体（有向グラフ向け）
struct edge {
  ll to; // E.toでその辺の終点へアクセスできる
  ll cost; // e.costでその辺の重みにアクセスできる
};
//Union_Find木
struct UnionFind {
  vector<int> UF; // UF.at(i) : iの親の番号
  vector<int> SIZE; // SIZE.at(root(i)) : iと連結されてる要素の数
  UnionFind(int N) : UF(N), SIZE(N, 1) { // 最初は全てが根であるとして初期化
    for(int i = 0; i < N; i++) {
      UF.at(i) = i;
    }
  }
  int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (UF.at(x) == x) {
      return x;
    }
    return UF.at(x) = root(UF.at(x));
  }
  void unite(int x, int y) { // xとyの木を併合
    int rx = root(x); // xの根をrx
    int ry = root(y); // yの根をry
    if (rx == ry) {
      return; // xとyの根が同じ(=同じ木にある)時はそのまま
    }
    // xとyの根が同じでない(=同じ木にない)時：小さい方の根を大きい方の根につける
    if (SIZE.at(rx) < SIZE.at(ry)) {
      UF.at(rx) = ry;
      SIZE.at(ry) += SIZE.at(rx);
      SIZE.at(rx) = 0;
    }
    else {
      UF.at(ry) = rx;
      SIZE.at(rx) += SIZE.at(ry);
      SIZE.at(ry) = 0;
    }
  }
  bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
  int size(int x) { // xと連結されてる要素の数を返す
    return SIZE.at(root(x));
  }
};

//関数 (計算量)
//ctoi (O(1))
int ctoi(char c){
  if (c == '0') return 0;
  if (c == '1') return 1;
  if (c == '2') return 2;
  if (c == '3') return 3;
  if (c == '4') return 4;
  if (c == '5') return 5; 
  if (c == '6') return 6;
  if (c == '7') return 7;
  if (c == '8') return 8;
  if (c == '9') return 9;
  return -1;  
}
//to_char (O(1))
char to_char(int i){
  if (i == 0) return '0';
  if (i == 1) return '1';
  if (i == 2) return '2';
  if (i == 3) return '3';
  if (i == 4) return '4';
  if (i == 5) return '5';
  if (i == 6) return '6';
  if (i == 7) return '7';
  if (i == 8) return '8'; 
  if (i == 9) return '9';
  return ' ';  
}
//素数判定 
//一つ一つの判定ではこっちの方が速い(一つ当たりO(√N))
//一方100までに何個あるかなどはEratosthenesの篩の方が良い（O(NlogN))
bool PN(int x) {
  if (x <= 1) return false; // 1や0,-1は素数ではない
  if (x == 2) return true; // √2 + 1 > 2 なので下でやると 2 ％ 2 = 0 となり判定できない
  for (int i = 2; i < sqrt(x) + 1; i++) {
    if (x % i == 0) return false; // 割れたら素数じゃない
  }
  return true;
}
// A^N mod M を計算する。modしたくなかったらM = LINFとかにすればよい。(O(√N))
ll modpow(ll A, ll N, ll M) {
  ll ans = 1;
  while (N > 0) {
    if (N & 1) ans = ans * A % M;
      A = A * A % M;
      N >>= 1;
   }
  return ans;
}
  
//メイン処理
int main() {
  cout << fixed << setprecision(16); //精度向上
  //ここまでテンプレ
  int N, M;
  cin >> N >> M;
  vector<vector<int>> W(N);
  for (int i = 0; i < M; i++) {
    int A, B;
    cin >> A >> B;
    W.at(A - 1).push_back(B - 1);
    W.at(B - 1).push_back(A - 1);
  }
  vector<int> A(N, INF);
  A.at(0) = 0;
  vector<int> H(N);
  queue<int> T;
  T.push(0);
  while (!T.empty()) {
    for (int i = 0; i < int(W.at(T.front()).size()); i++) {
      if (A.at(W.at(T.front()).at(i)) == INF) {
        A.at(W.at(T.front()).at(i)) = A.at(T.front()) + 1;
        T.push(W.at(T.front()).at(i));
        H.at(W.at(T.front()).at(i)) = T.front();
      }
    }
    T.pop();
  }
  bool ok = true;
  for (int i = 0; i < N; i++) {
    if (A.at(i) == INF) {
      ok = false;
    }
  }
  if (ok) {
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) {
      cout << H.at(i) + 1 << endl;
    }
  }
  else {
    cout << "No" << endl;
  }
}