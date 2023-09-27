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
 
 
int main(){
 
  int N,M;
  while(true){
    cin >> N >> M;
    if(N == 0 && M == 0)break;
    vector<int> h,w;
    map<int,int> http,www;
    rep(i,N){
      int hh;
      cin >> hh;   
      h.push_back(hh);
    }
    rep(i,M){
      int ww;
      cin >> ww;
      w.pb(ww);
    }
 
    rep(i,N){
      http[h[i]]++;
      int pre = h[i];
      for(int j=i+1;j<N;j++){
    pre += h[j];
    http[pre]++;
      }
    }
 
    rep(i,M){
      www[w[i]]++;
      int pre = w[i];
      for(int j=i+1;j<M;j++){
    pre += w[j];
    www[pre]++;
      }
    }
 
    int cnt = 0;
    map<int,int>::iterator it = www.begin();
    while(it != www.end()){   
 
      cnt += http[(*it).first]*(*it).second;
     
    it++;
    }
     
    cout << cnt << endl;
 
 
 
 
  }
return 0;
}