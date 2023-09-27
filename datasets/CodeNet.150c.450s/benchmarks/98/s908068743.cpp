#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pll;

#define reps(i,f,n) for(int i = int(f); i <= int(n); i++)
#define rep(i,n) reps(i,0,int(n)-1)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)

#define all(x) (x).begin(),(x).end()
#define X first
#define Y second

#define sz size()
#define eb emplace_back



int main(void){
  int n, m;
  while(1){
    int suma = 0;
    int sumb = 0;
    int a[128],b[128];
    cin >> n >> m;
    if(n+m==0)break;
    rep(i,n)cin >> a[i];
    rep(j,m)cin >> b[j];
    rep(i,n)suma += a[i];
    rep(i,m)sumb += b[i];
    sort(a,a+n);
    sort(b,b+m);

    rep(i,n)rep(j,m){
      if(suma - a[i] + b[j] == sumb - b[j] + a[i]){
        cout << a[i] << " " << b[j] << endl;
        goto A;
      }
    }
    cout << "-1" << endl;
    A:;
  }
  return 0;
}