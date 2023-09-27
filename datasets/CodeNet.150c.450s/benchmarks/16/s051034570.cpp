#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<unordered_map>
#include<utility>
#include<cmath>
#include<random>
#include<cstring>
#include<queue>
#include<stack>
#include<bitset>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#include<typeinfo>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define FOR(i,a) for(auto i:a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
#define show1d(v) rep(i,v.size())cout<<" "<<v[i];cout<<endl<<endl;
#define show2d(v) rep(i,v.size()){rep(j,v[i].size())cout<<" "<<v[i][j];cout<<endl;}cout<<endl;
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip>vip;
template<typename A,typename B>bool cmin(A &a,const B &b){return a>b?(a=b,true):false;}
template<typename A,typename B>bool cmax(A &a,const B &b){return a<b?(a=b,true):false;}
const double PI=acos(-1);
const double EPS=1e-9;
Def inf = sizeof(Def) == sizeof(long long) ? 2e18 : 1e9+10;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int main(int argc, char *argv[])
{
  stack<int> s1;
  stack< pair<int, int> > s2;
  string s;
  int sum=0;
  cin >> s;
  rep(i, s.size()) {
    if(s[i]=='\\') {
      s1.push(i);
    }
    else if(s[i] == '/' && s1.size() > 0) {
      int j = s1.top();
      int a = i-j;
      sum+=i-j;
      s1.pop();
      while(s2.size()>0&&s2.top().first>j) {
        a+=s2.top().second;
        s2.pop();
      }
      s2.push(make_pair(j,a));
    }
  }

  cout<<sum<<endl;
  cout<<s2.size();
  vector<int> ans;
  for (int i=0, s2_size=s2.size();i<s2_size;++i) {
    ans.push_back(s2.top().second);
    s2.pop();
  }
  reverse(ans.begin(), ans.end());
  for (int i=0, ans_size=ans.size();i<ans_size;++i) {
    cout<<" ";
    cout<<ans.at(i);
  }
  cout<<endl;
  return 0;
}

