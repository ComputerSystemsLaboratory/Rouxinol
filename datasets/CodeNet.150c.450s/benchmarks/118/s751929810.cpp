#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<map>
#include<set>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define MAX_n 105

int n;
int Y[MAX_n],M[MAX_n],D[MAX_n];

void input(){
  cin>>n;
  REP(i,n)  cin>>Y[i]>>M[i]>>D[i];
}

void solve(){
  REP(i,n){
    int keika=0;
    for(int j=1;j<Y[i];j++){
      if(j%3==0) keika+=200;
      else keika+=(20*5+19*5);
    }   
    for(int j=1;j<M[i];j++){
      if(Y[i]%3==0)keika+=20;
      else if(j%2==0)keika+=19;
      else keika+=20;
    }
    keika+=D[i]-1;
    cout<<196470-keika<<endl;
  }
}

int main(){
  input();
  solve();

  return 0;
}