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

void solve(string s){
  set<string>se;
  string ss,rs;
  rs=s;
  reverse(all(rs));
  se.insert(s);
  se.insert(rs);
  
  while(s.size()){
    ss+=s[0];
    s.erase(s.begin());
    se.insert(s+ss);
    se.insert(ss+s);
    
    reverse(all(s));
    se.insert(ss+s);
    se.insert(s+ss);

    reverse(all(ss));
    se.insert(ss+s);
    se.insert(s+ss);

    reverse(all(s));
    se.insert(ss+s);
    se.insert(s+ss);

    reverse(all(ss));
  }
  cout<<se.size()<<endl;
}

int main(){
  int n;
  string s;
  cin>>n;
  rep(i,n){
    cin>>s;
    solve(s);
  }
  return 0;
}