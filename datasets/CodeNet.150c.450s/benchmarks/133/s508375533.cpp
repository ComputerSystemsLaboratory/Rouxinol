#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for(int i=1; i<(int)(n); i++)
int D, c[27], s[366][27];

int sco(vector<int> &t){
int S=0, L[27]={};
REP(i, D){
  S+=s[i][t[i]];
  L[t[i]]=i;
  REP(j, 27){ S-=c[j]*(i-L[j]); }
  cout << S << "\n";
}
return S;
}

int main(){
  cin >> D; D++;
  REP(i, 27){ cin >> c[i]; }
  REP(i, D){ REP(j, 27){ cin >> s[i][j]; } }
  vector<int> t(D), last(27, 0);
  REP(i, D){ cin >> t[i]; }
  sco(t);
}