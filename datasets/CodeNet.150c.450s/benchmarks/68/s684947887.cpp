#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <cctype>
#include <cmath>
#include <map>
#include <set>
#define rep(i, m, n) for(int i = m;i < n;i++)
#define repr(i, n) for(int i = n;i >= 0;i--)
#define ll long long
#define ull unsigned long long
#define pb(a) push_back(a)
#define popb(a) pop_back(a)
#define debug(x) cout<<#x<<": "<<x<<endl
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define INF 999999999
#define PI 3.14159265358979
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
  ll n,a[50001]={},ans=1e9;
  while(1){
    cin>>n;
    if(n==0)return 0;
    rep(i,0,n)cin>>a[i];
    sort(a,a+n);
    rep(i,1,n){
      ans=min(ans,a[i]-a[i-1]);
    }
    cout<<ans<<endl;
    ans=1e9;
  }
}