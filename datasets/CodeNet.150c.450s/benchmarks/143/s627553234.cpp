#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<tuple>
#include<map>
#include<bitset>
#include<queue>
#define rep(i,n) for (int i=0; i<n; i++)
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;

int main(){
  int n;
  cin >> n;
  map<int,int> m;
  ll sum = 0;
  rep(i,n) {
    int a;
    cin >> a;
    m[a]++;
    sum += a;
  }

  int q;
  cin >> q;
  rep(i,q){
    int b, c;
    cin >> b >> c;
    if (m.count(b)){
      sum += (c - b) * m.at(b);
      m[c] += m.at(b);
      m.erase(b);
    }
    cout << sum << endl;
  }
}
