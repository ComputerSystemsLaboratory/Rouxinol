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

int n;
string s[155];
bool up=false;

void init(){
  rep(i,105)s[i]="aaa";
}

int main(){
  while(cin>>n){
    if(n==0)break;
    init();
    up=false;
    int cnt=0;
    rep(i,n)cin>>s[i];
    for(int i=0;i<n;i+=2){
      if(!up&&((s[i]=="lu"&&s[i+1]=="ru")||(s[i]=="ru"&&s[i+1]=="lu"))){
	up=true;
	cnt++;
      }else if(up&&((s[i]=="ld"&&s[i+1]=="rd")||(s[i]=="rd"&&s[i+1]=="ld"))){
	up=false;
	cnt++;
      }
      
    }
    cout<<cnt<<endl;
  }
    
  return 0;
}