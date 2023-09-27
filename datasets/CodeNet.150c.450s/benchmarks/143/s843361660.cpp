#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
#define repo(i, n) for(int i=1; i<=n; i++)
#define INF 1001001001
#define INFll 100100100100100
// debug用
#define PrintVec(x) for (auto elementPrintVec: x) { cout << elementPrintVec << " "; } cout << endl;

using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> count(100005);
  ll sum=0;
  rep(i, n){
    cin >> a[i];
    sum+=a[i];
    count[a[i]]++;
  }
  int q;
  cin >> q;
  rep(i, q){
    int b, c;
    cin >> b >> c;
    count[c]+=count[b];
    sum+=(c-b)*count[b];
    count[b]=0;
    cout << sum << endl;
  }
  return 0;
}
