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

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;
/*---------------------------------------------------*/

int main(){
  int m,mini,maxi,gap,ans;
  int data[200];
  while(cin>>m>>mini>>maxi){
    if(m==0&&mini==0&&maxi==0)break;
    rep(i,m)cin>>data[i];
    ans=mini;gap=0;
    for(int i=mini-1;i<=maxi-1;i++){
      if(abs(data[i]-data[i+1])>=gap){
	gap=abs(data[i]-data[i+1]);
	ans=i+1;
      }
    }
    cout<<ans<<endl;
  }
}