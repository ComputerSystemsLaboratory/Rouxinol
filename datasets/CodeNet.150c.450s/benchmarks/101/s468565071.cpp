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
int n,m,q,d[100010],used[100100];
vector <int> g[100010];
vector <string> str;

//numは連結成分の番号
void dfs(int v,int num){
  used[v]=true;
  d[v]=num;
  REP(i,g[v].size()){
    if(!used[g[v][i]])dfs(g[v][i],num);
  }

}



int main(){
  cin >>n>>m;
  REP(i,m){
    int s,t;
    cin >>s>>t;
    g[s].push_back(t);
    g[t].push_back(s);
  }
  REP(i,n)used[i]=false;

  REP(i,n){
    if(!used[i])dfs(i,i);
  }
  cin >>q;
  REP(i,q){
    int s,t;
    cin >>s>>t;
    if(d[s]==d[t])str.push_back("yes");
    else str.push_back("no");
  }
  REP(i,str.size()){
    cout <<str[i]<<endl;
  }
}

