
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<n;i++)
#define loop(i,a,n) for(i=a;i<n;i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef pair<int,int> pii;

int main(void) {
  int i,j;
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    pii v[10000];
    string s;
    rep(i,n){
      int a,b;
      cin>>s;
      a=(s[0]-'0')*10+(s[1]-'0');
      a*=60;
      a+=(s[3]-'0')*10+(s[4]-'0');
      a*=60;
      a+=(s[6]-'0')*10+(s[7]-'0');
      cin>>s;
      b=(s[0]-'0')*10+(s[1]-'0');
      b*=60;
      b+=(s[3]-'0')*10+(s[4]-'0');
      b*=60;
      b+=(s[6]-'0')*10+(s[7]-'0');
      v[i].first=a;
      v[i].second=b; 
   }
    sort(v,v+n);
    priority_queue<int> q;
    q.push(-v[0].second);
    loop(i,1,n){
      if(q.top()>=-v[i].first)q.pop();
      q.push(-v[i].second);
    }
    cout<<q.size()<<endl;
  }
}