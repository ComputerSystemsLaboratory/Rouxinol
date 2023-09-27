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
#define ll long long
#define INF 1000000000
#define mod 1000000007
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=true;

set<string>se;

void divide(string s){
  string a;
  a=s[0];
  s.erase(s.begin());
  while(s.size()){
    se.insert(a+s);
    se.insert(s+a);
    reverse(all(a));
    //if(debug)cout<<s<<"+"<<a<<endl;
    se.insert(s+a);
    se.insert(a+s);
    reverse(all(s));
    se.insert(s+a);
    se.insert(a+s);
    reverse(all(a));
    //if(debug)cout<<s<<"+"<<a<<endl;
    se.insert(s+a);
    se.insert(a+s);
    reverse(all(s));
    a=a+s[0];
    s.erase(s.begin());
    //cout<<s<<endl;
  }
}


int main(){
  int m;
  string s;
  cin>>m;
  rep(i,m){
    cin>>s;
    divide(s);
    cout<<se.size()<<endl;
    se.clear();
  }

  return 0;
}