#include <bits/stdc++.h>
using namespace std;


#define FOR(i, start, end) for(uint64_t i=start; i<end; i++)
#define REP(i, n) FOR(i, 0, n)

// 最大公約数gcd
// 最小公倍数lcm=m*n/gcd
uint64_t gcd(uint64_t m, uint64_t n) {
  uint64_t temp;
  while (m % n != 0){
    temp = n;
    n = m % n;
    m = temp;
  }
  return n;
}

uint64_t lcm(uint64_t m, uint64_t n) {
  return (m*n)/gcd(m,n);
}

// vector<vector<uint64_t> > v(n+1, vector<uint64_t>(n+1, 0))
// v[n][k]に組み合わせ数が入る。
void comb(vector<vector <uint64_t> > &v){
  for(uint64_t i = 0;i <v.size(); i++){
    v[i][0]=1;
    v[i][i]=1;
  }
  for(uint64_t k = 1;k <v.size();k++){
    for(uint64_t j = 1;j<k;j++){
      v[k][j]=(v[k-1][j-1]+v[k-1][j]);
    }
  }
}

// 掛け算オーバーフロー判定
bool is_product_overflow(uint64_t a, uint64_t b) {

	uint64_t prod = a * b;
	
	return (prod / b != a);
}

//素因数分解
void primeFactorization(uint64_t a, list<uint64_t> &factors){ //素因数分解を出力するプログラム
  long i,sq;
  if(a%2==0){ //偶数の場合
    factors.push_back(2);
    primeFactorization(a/2,factors); //2で割った値で再帰
    return;
  }
  sq = sqrt(a);
  for(i=3;i<=sq;i+=2){ //3以上√a以下の奇数の場合
	if(a%i==0){
	  factors.push_back(i);
      primeFactorization(a/i,factors); //割れた値で再帰
      return;
	}
  }
  //偶数でも3以上√a以下の奇数の場合でも割り切れない場合
  if(a!=1){ //aが1でないなら、a自身は素数
    factors.push_back(a);
  }
}

// 円周率
// M_PI

// #include <iomanip> // setprecisionを使用するのに必要
// cout << std::fixed << std::setprecision(15) << y << endl;

// 昇順
// priority_queue<int, vector<int>, greater<int> > queue;

signed main() {
  int64_t n,m;
  cin >> n >> m;
  vector<vector<int>> rooms(n);
  int a,b;
  for(int i=0;i<m;i++){
    cin >> a >> b;
    a--;b--;
    rooms[a].push_back(b);
    rooms[b].push_back(a);
  }
 
  vector<int> dist(n, -1);
  vector<int> mark(n, -1);

  dist[0] = 0;
  mark[0] = 0;
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int id = q.front();
    q.pop();
    for(auto v:rooms[id]){
      if(dist[v]>=0) continue;
      dist[v] = dist[id]+1;
      mark[v] = id;
      q.push(v);
    }
  }
  cout << "Yes" << endl;
  for(int i=1;i<n;i++){
    cout << mark[i]+1 << endl;
  }
  return 0;
}