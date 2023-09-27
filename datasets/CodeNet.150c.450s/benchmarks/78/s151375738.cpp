#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i = a ; i < n ; i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

int dpAll[1000010];
int dpOdd[1000010];
vector<int> v;

int dfsAll(int rem){
  if(rem == 0) return 0;
  if(dpAll[rem] != INT_MAX) return dpAll[rem];

  int res = INT_MAX;
  for(int i=0;i<v.size() && v[i]<=rem;i++){
    int tmp = dfsAll(rem-v[i]);
    if(tmp != INT_MAX && res > tmp + 1) res = tmp + 1;
  }
  return dpAll[rem]=res;
}

int dfsOdd(int rem){
  if(rem == 0) return 0;
  if(dpOdd[rem] != INT_MAX) return dpOdd[rem];

  int res = INT_MAX;
  for(int i=0;i<v.size() && v[i]<=rem;i++){
    if(v[i] % 2 == 1){
      int tmp = dfsOdd(rem-v[i]);
      if(tmp != INT_MAX && res > tmp + 1) res = tmp + 1;
    }
  }
  return dpOdd[rem]=res;
}

int main(){
  int n;

  for(int i=1;i*(i+1)*(i+2)/6<=1000100;i++){
    v.push_back(i*(i+1)*(i+2)/6);
  }

  rep(i,1000010) dpAll[i] = INT_MAX;
  rep(i,1000010) dpOdd[i] = INT_MAX;
  for(int i=1;i<=1000002;i+=10000) dfsAll(i);
  for(int i=1;i<=1000002;i+=10000) dfsOdd(i);

  while(cin>>n,n){
    cout<<dpAll[n]<<" "<<dpOdd[n]<<endl;
  }
}