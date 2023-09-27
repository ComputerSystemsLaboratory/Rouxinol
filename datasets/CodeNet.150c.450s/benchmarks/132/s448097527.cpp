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

int n,p;
int people[55];

void init(){
  rep(i,55)people[i]=0;
}

void solve(){
  int stone=p;
  for(int i=0;;i++){
    
    if(people[i%n]==p){
      
      cout<<i%n<<endl;
      break;
    }else if(stone==0){
      stone=people[i%n];
      people[i%n]=0;
    }else{
      people[i%n]++;
      stone--;
    }
  }
}

int main(){
  while(cin>>n>>p){
    if(n==0&&p==0)break;
    init();
    solve();
  }
}