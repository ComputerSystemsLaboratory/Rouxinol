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
#define MAX_N 100
#define MAX_M 100

int n,m,dif;
int Sn[MAX_N];
int Sm[MAX_M];
bool a;

bool input(){
  cin>>n>>m;
  dif=0;
  a=false;
  REP(i,n){
    cin>>Sn[i];
    dif+=Sn[i];
  }
  REP(i,m){
    cin>>Sm[i];
    dif-=Sm[i];
  }
  return(n!=0);
}

void solve(){
  REP(i,n){
    REP(j,m){
      if((Sn[i]-Sm[j])*2==dif){
        cout<<Sn[i]<<' '<<Sm[j]<<endl;
        a=true;
        break;
      }
    }
    if(a)break;
  }
  if(a!=true)cout<<-1<<endl;
}

int main(){
  dif=0;
  a=false;
  REP(i,MAX_N)Sn[i]=0;
  REP(i,MAX_M)Sm[i]=0;
  while(input()){
    solve();
  }
  return 0;
}