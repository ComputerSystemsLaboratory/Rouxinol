#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

bool debug=true;
/*---------------------------------------------------*/

int main(){
  int n,x,mini;
  vi v;
  while(cin>>n){
    mini=INF;
    if(n==0)break;
    v.clear();
    rep(i,n){
      cin>>x;
      v.pb(x);
    }
    sort(all(v));
    rep(i,v.size()-1){
      mini=min(mini,v[i+1]-v[i]);
    }
    cout<<mini<<endl;
  }
  return 0;
}