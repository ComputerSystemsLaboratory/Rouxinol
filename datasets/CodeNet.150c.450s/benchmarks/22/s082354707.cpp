#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
using ll = long long;
using VL=vector<ll>;

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
const long long INF =  999999999;

struct edge{int from,to,cost;};
vector<edge> evec;
int d[1010];

int main(){
  int V,E,r;
  cin>>V>>E>>r;

  REP(i,E){
    int s,t,d;
    cin >>s>>t>>d;
    edge e;
    e.from=s;
    e.to=t;
    e.cost=d;
    evec.push_back(e);
  }

  fill(d,d+V,INF);
  d[r]=0;
  int count=0;
  while(true){
    bool update=false;
    count++;
    REP(i,E){
      edge e=evec[i];
      if(d[e.from]<INF && d[e.from]+e.cost <d[e.to]){
        d[e.to]=d[e.from]+e.cost;
        update = true;
      }
    }
    if(!update)break;
    if(count==V+1)break;
    }

    if(count==V+1){
      cout<<"NEGATIVE CYCLE"<<endl;
    }
    else{
      REP(i,V){
        if(d[i]==INF)cout<<"INF"<<endl;
        else cout<<d[i]<<endl;
      }
    }
  }

