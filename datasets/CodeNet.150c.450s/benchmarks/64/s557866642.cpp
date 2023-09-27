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
#include <utility>
#include <ctime>
#define INF 2000000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
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
int a[200],m;
int n,q;

bool solve(int sum, int now){
  if(sum==m)return true;
  if(now>n)return false;
  return solve(sum+a[now], now+1) || solve(sum, now+1);
}

int main(){
  cin>>n;
  rep(i,n)cin>>a[i];
  cin>>q;
  rep(i,q){
    cin>>m;
    if(solve(0,0))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}