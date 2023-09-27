#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdexcept>
#include<cmath>
#include<fstream>
#include<memory>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<deque>
#include<sstream>
#include<iomanip>
#include<sstream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<climits>
#include<map>
#include<set>
#include<list>
#include<cassert>
#include<deque>
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define INF 1<<27
#define all(n) n.begin(),n.end()
#define insert(a,b,c,d) PP(P(a,b),P(c,d))
#define F first
#define iter(c) __typeof__((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();++i)
#define S second
#define pb push_back
#define pf push_front
#define LIM 100000
using namespace std;
typedef pair<int,int> P;
typedef pair<P,P> PP;
typedef long long ll;
typedef unsigned long long ull;

int di[3] = {3600,60,1};

int getTime(string s){
  rep(i,s.length())if(s[i] == ':')s[i] = ' ';
  stringstream ss;
  ss << s;
  int ret = 0;
  for(int i=0;i<3;i++){
    string pre;
    ss >> pre;
    int tim = (atoi)(pre.c_str());
    ret += tim*di[i];
  }
 
  return ret;
}

int main(){
  int n;

  while(true){
    cin >> n;
    if(n == 0)break;
    string star,endar;
    vector<P> vec;
    rep(i,n){
      cin >> star >> endar;
      int st,ed;
      st = getTime(star);
      ed = getTime(endar);
      vec.pb(P(st,ed));
    }
    sort(all(vec));
    int cnt = 0;
    int mex = 0;
   
    rep(i,n){
      cnt = 1;
      for(int j=i-1;j>=0;j--){
	if(vec[j].S <= vec[i].F)continue;
	cnt++;
      }
      mex = max(cnt,mex);
    }

    cout << mex << endl;

  }
return 0;
}