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

int n;

void solve(){
  int ans=0;
  string f;
  bool right=false,left=false;
  bool up=true;
  rep(i,n){
    cin>>f;
    if(f=="lu")left=true;
    else if(f=="ru")right=true;
    else if(f=="ld")left=false;
    else if(f=="rd")right=false;
    if(debug)cout<<up<<" "<<right<<" "<<left<<endl;
    if(up&&right&&left){ans++;up=false;}
    if(!up&&!right&&!left){ans++;up=true;}
  }
  cout<<ans<<endl;
}

int main(){
  while(cin>>n){
    if(n==0)break;
    solve();
  }
  return 0;
}