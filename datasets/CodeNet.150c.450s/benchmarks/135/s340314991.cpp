#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <limits.h>
#include <cmath>
#include <queue>
#include <map>
#include <iomanip>
#include <random>
#include <fstream>
#include <cassert>
#define rep(i, n) for (int i = 0; i < n; i++)
#define PI 3.14159265358979323846
#define MOD 1000000007
#define vi vector<int>
using namespace std;
using ll = long long;

// ----ここから下は以前競プロをやっていた時に使っていたものです----　

const int MAX = 1000000;

ll fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++){
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

// 二項係数計算
long long COM(int n, int k){
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

ll gcd(ll a, ll b)
{
  ll r;
  while ((r = a % b))
  {
    a = b;
    b = r;
  }
  return b;
}

template <class T> struct cord{
  T x,y;
};

template <class T> double dist(cord<T> a, cord<T> b){
  T dx=a.x-b.x;
  T dy=a.y-b.y;
  return sqrt(dx*dx+dy*dy);
}

struct s{
  int p,i,r;
};

//比較関数（降順）
bool cmpP(const s &a, const s &b){
  return a.p > b.p;
}

//比較関数（昇順）
bool cmpI(const s &a, const s &b){
  return a.i < b.i;
}

// ----本問について----
// 問題：Square Route
// 問題文URL：https://onlinejudge.u-aizu.ac.jp/problems/2015
// 所要時間：
// 学んだこと：
// 　
// ------------------

// ----ここから本問のソースコード----

// グローバル変数（入力）
int h[1510],w[1510],N,M;

int solve() {
  int answer=0;
  int sum=0;

  // 入力
  rep(i,N){
    cin >> h[i];
    sum += h[i];
  }
  vector<int> hWidth(sum+1);
  sum = 0;
  rep(i,M){
    cin >> w[i];
    sum += w[i];
  }
  vector<int> wWidth(sum+1);
  rep(i,N){
    for (int j=i; j<N; j++){
      sum=0;
      for (int k=i; k<=j; k++){
        sum += h[k];
      }
      hWidth[sum]++;
    }
  }
  rep(i,M){
    for (int j=i; j<M; j++){
      sum=0;
      for (int k=i; k<=j; k++){
        sum += w[k];
      }
      wWidth[sum]++;
    }
  }
  rep(i,min(hWidth.size(),wWidth.size())){
    answer += hWidth[i]*wWidth[i];
  }

  return answer;
}

int main()
{

  //cout << fixed << setprecision(10);
  while (cin >> N >> M && N>0){
    cout << solve() << endl;
  }


  return 0;
}

