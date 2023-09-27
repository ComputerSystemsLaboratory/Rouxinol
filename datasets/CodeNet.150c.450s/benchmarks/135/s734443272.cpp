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
#define INF 999999999
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

int n,m;
ll ans;
int wide[1500001],hight[1500001];
int w[1505],h[1505];

void enumerate_hight(){
  int sum;
  for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
      sum+=h[j];
      //cout<<"h: "<<sum<<endl;
      hight[sum]++;
    }
  }
}

void enumerate_wide(){
  int sum;
  for(int i=0;i<m;i++){
    sum=0;
    for(int j=i;j<m;j++){
      sum+=w[j];
      //cout<<"w: "<<sum<<endl;
      wide[sum]++;
    }
  }
}

void solve(){
  ans=0;
  for(int i=0;i<n;i++)cin>>h[i];
  enumerate_hight();
  for(int i=0;i<m;i++)cin>>w[i];
  enumerate_wide();
  //rep(i,100)cout<<i<<":  "<<wide[i]<<" "<<hight[i]<<endl;
  rep(i,1500001){ans+=wide[i]*hight[i];wide[i]=hight[i]=0;}
  cout<<ans<<endl;
}

int main(){
  while(cin>>n>>m){
    if(n==0&&m==0)break;
    solve();
  }
}