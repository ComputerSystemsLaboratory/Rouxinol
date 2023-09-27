#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 100000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
 
/*---------------------------------------------------*/

int main(){
  int n,k;
  int a[100005];
  ll ans,sum;
  while(cin>>n>>k){
    if(n==0&&k==0)break;
    ans=0;
    rep(i,n)cin>>a[i];
    rep(i,k)ans+=a[i];
    sum=ans;
    REP(i,k,n){
      sum=sum-a[i-k]+a[i];
      ans=max(sum,ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}