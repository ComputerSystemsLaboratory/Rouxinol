#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(ull i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)
#define iter(i,c) for(auto i=(c).begin(); i!=(c).end(); ++i)
#define riter(i,c) for(auto i=(c).rbegin(); i!=(c).rend(); ++i)
const double eps = 1e-10;
const double pi = acos(-1.0);
const double inf = (int)1e8;

int main(){
  int n,r;
  while(cin>>n>>r&&n+r!=0){
    list<int> fuda;
    rep(i,n){
      fuda.pb(n-i);
    }
    int p,c;
    for(int i=0;i<r;i++){
      cin >> p >> c;
      rep(j,c){
        auto tmp = fuda.begin();
        rep(l,p+c-2){
          tmp++;
        }
        rep(l,c){
          fuda.push_front(*tmp);
          fuda.erase(tmp);
        }
      }
    }
    cout << fuda.front() << endl;
  }
}