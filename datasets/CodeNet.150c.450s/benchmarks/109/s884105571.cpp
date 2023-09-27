#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=int(a);i<int(b);++i)
#define SIZE 200005
#define INF 1000000005LL
//#define INF 1e18
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int a[3600*24+5];

int n;
string s;
int tr(int i){
  return s[i] - '0';
}

void solve(){
  fill(a,a+3600*24+5,0);
  rep(i,0,n){
    int l,r;
    cin >> s;
    l = (tr(0)*10+tr(1))*3600 + (tr(3)*10+tr(4))*60 + tr(6)*10+tr(7);
    cin >> s;
    r = (tr(0)*10+tr(1))*3600 + (tr(3)*10+tr(4))*60 + tr(6)*10+tr(7);
    a[l]++;
    a[r]--;
    //cout << l << " " << r << endl;
  }
  int u = a[0];
  rep(i,1,3600*24){
    a[i] += a[i-1];
    u = max(u,a[i]);
  }
  cout << u << endl;
}


int main(){
  for(;;){
    cin >> n;
    if(n==0)break;
    solve();
  }

  return 0;
}

