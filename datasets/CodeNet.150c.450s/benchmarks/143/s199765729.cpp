#include <bits/stdc++.h>
#include <set>
using namespace std;
using pii = pair<int,int>;
using pll = pair<long long, long long>;
const long long INF = 1<<29;

const int MOD = 1000000007;
long long ruizyou(long long m,long long n){
  if(m == 0)return 0;
  if(m == 1)return 1;
  long long ans = 1;
  long long tmp = m;
  for(int i=0;i<=30;i++){
    if(n & (1<<i)){
      ans *= tmp;
      ans %= MOD;
    }
    tmp *= tmp;
    tmp %= MOD;
  }
  return ans;
}
long long kaizyou(long long x){
  if(x == 0)return 1;
  return x * kaizyou(x-1) % MOD;
}
long long comb(long long x,long long y){
  long long bunsi = kaizyou(x);
  long long bunbo = kaizyou(x-y) * kaizyou(y) % MOD;
  return bunsi * ruizyou(bunbo,MOD-2) % MOD;
}
struct unionfind{
  vector<int> par;
  vector<vector<int>> children;
  vector<int> hukasa;
  vector<int> kazu;
  unionfind(int n){
    par = vector<int>(n);
    hukasa = vector<int>(n,0);
    kazu = vector<int>(n,1);
    for(int i=0;i<n;i++){
      par.at(i) = i;
    }
  }
  int root(int x){
    if(par.at(x) == x)return x;
    return root(par.at(x));
  }
  void unite(int x,int y){
    int rx = root(x);
    int ry = root(y);
    if(rx == ry)return;
    if(hukasa.at(rx) >= hukasa.at(ry)){
      par.at(ry) = rx;
      hukasa.at(rx) = max(hukasa.at(ry) + 1,hukasa.at(rx));
      kazu.at(rx) += kazu.at(ry);
    }
    else{
      par.at(rx) = ry;
      kazu.at(ry) += kazu.at(rx);
    }
  }
  void newkazu(){
    int n = kazu.size();
    for(int i=0;i<n;i++){
      kazu.at(i) = kazu.at(root(i));
    }
  }
  bool same(int x,int y){
    return root(x) == root(y);
  }
};
int ctoi(char a){
  return a - '0';
}
long long gcd(long long a,long long b){
  long long c = max(a,b);
  long long d = min(a,b);
  if(d % c == 0)return c;
  return gcd(c,d%c);
}
long long lcm(long long a,long long b){
  return a * b / gcd(a,b);
}
void hukasa(vector<vector<int>> s,vector<vector<int>> table,int &ans,pii frm,int n,int m){
  int x,y;
  tie(x,y) = frm;
  set<pii> se;
  if(x-1 >= 0)se.insert(pii(x-1,y));
  if(x+1 < n)se.insert(pii(x+1,y));
  if(y-1 >= 0)se.insert(pii(x,y-1));
  if(y+1 < m)se.insert(pii(x,y+1));
  for(auto t:se){
    int tx,ty;
    tie(tx,ty) = t;
    if(s.at(tx).at(ty) && table.at(tx).at(ty) == -1){
      table.at(tx).at(ty) = table.at(x).at(y) + 1;
      ans = max(ans,table.at(tx).at(ty));
      hukasa(s,table,ans,t,n,m);
      table.at(tx).at(ty) = -1;
    }
  }
}
void daiku(int frm,vector<vector<pii>> g,vector<int> &cost,int n){
  priority_queue<pii,vector<pii>,greater<pii>> q;
  q.push(pii(cost.at(frm),frm));
  vector<bool> kakutei(n,false);
  while(!q.empty()){
    pii now = q.top();
    q.pop();
    int n1,n2;
    tie(n1,n2) = now;
    if(kakutei.at(n2))continue;
    kakutei.at(n2) = true;
    for(auto t:g.at(n2)){
      int tx,ty;
      tie(tx,ty) = t;
      if(cost.at(tx) > n1 + ty){
        cost.at(tx) = n1 + ty;
        q.push(pii(cost.at(tx),tx));
      }
    }
  }
}
int main(){
  int n;
  cin >> n;
  vector<long long> a(n);
  vector<long long> table(ruizyou(10,5)+1,0);
  for(int i=0;i<n;i++){
    cin >> a.at(i);
    table.at(a.at(i))++;
  }
  long long sum = 0;
  for(long long i=0;i<=ruizyou(10,5);i++)sum += table.at(i) * i;
  int q;
  cin >> q;
  vector<long long> b(q),c(q);
  for(int i=0;i<q;i++)cin >> b.at(i) >> c.at(i);
  for(int i=0;i<q;i++){
    sum += (c.at(i) - b.at(i)) * table.at(b.at(i));
    table.at(c.at(i)) += table.at(b.at(i));
    table.at(b.at(i)) = 0;
    cout << sum << endl;
  }
  
}