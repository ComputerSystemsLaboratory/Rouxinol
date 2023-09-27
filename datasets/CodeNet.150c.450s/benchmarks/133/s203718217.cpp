#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
int d,c[26],s[365][26],t[365],v[365],lst[26];

void calc_satisfaction(){
  int stsf=0;
  REP(i,d){
    stsf+=s[i][t[i]-1];
    lst[t[i]-1]=i+1;
    REP(j,26) stsf-=c[j]*(i+1-lst[j]);
    v[i]=stsf;
  }
}

int main(){
  cin>>d;
  REP(i,26) cin>>c[i];
  REP(i,d)REP(j,26) cin>>s[i][j];
  REP(i,d) cin>>t[i];

  calc_satisfaction();
  
  REP(i,d) cout<<v[i]<<endl;
}