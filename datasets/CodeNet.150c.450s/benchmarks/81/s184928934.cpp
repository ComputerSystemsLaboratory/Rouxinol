#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <numeric>
#define INF 2000000000
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
long long gcd(long long a,long long b){if(a%b==0){return b;}else return gcd(b,a%b);}
long long lcm(long long a,long long b){if(a==0){return b;} return a/gcd(a,b)*b;}
long long MOD; template<class T> void mod(T &n){MOD=n;}
#define sym cout<<"---------"<<endl;
#define ll long long
#define PL pair<long long, long long>
#define P pair<int,int>
#define mk make_pair
#define en endl
#define WHITE 1
#define BLACK 2
#define GRAY 1
#define RE return 0
#define int ll


signed main(){
  int n;
  while(cin>>n&&n){
    vector<P> G[15];
    
    int maxl=0;
    for(int i=0; i<n; i++){
      int a,b,c; cin>>a>>b>>c;
      G[a].push_back(mk(b,c));
      G[b].push_back(mk(a,c));
      maxl=max(maxl,max(a,b));
    }
    
    P min_ans; min_ans.first=INF;
    for(int i=0; i<=maxl; i++){
      int c[15];
      bool come[15];
      for(int j=0; j<=10; j++){c[j]=INF; come[j]=false;}
      
      priority_queue<P, vector<P>, greater<P> > que;
      que.push(mk(0,i));
      c[i]=0;
      int sum=0;
      while(!que.empty()){
        int at=que.top().second; int how_much=que.top().first;
        que.pop();
        if(come[at]) continue;
        sum+=how_much;
        come[at]=true;
        for(int j=0; j<G[at].size(); j++){
          int to=G[at][j].first;
          if(come[to]) continue;
          if(c[to]>how_much+G[at][j].second){
            c[to]=how_much+G[at][j].second;
            que.push(mk(c[to],to));
          }
        }
      }
    
      if(min_ans.first>sum){
        min_ans.first=sum; min_ans.second=i;
      }
    }
    
    cout<<min_ans.second<<" "<<min_ans.first<<en;
  }
}




