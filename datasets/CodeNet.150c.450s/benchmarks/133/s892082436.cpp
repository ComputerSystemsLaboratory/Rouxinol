#include <bits/stdc++.h>
//using namespace std;
#define REP(i,n) for(int i=0;i<(int)(n);i++)
int main(){
  int D; std::cin >> D;
  int c[26];
  int last[26]={};
  REP(i,26){
    std::cin >> c[i];
    last[i]=-1;
  }
  int s[D][26];
  REP(d,D){
    REP(j,26){
      std::cin >> s[d][j];
    }
  }
  int t[D];
  REP(d,D){
    std::cin >> t[d];
    t[d]--;
  }


  int v=0;
  REP(d,D){
    v+=s[d][t[d]];
    last[t[d]]=d;
    REP(i,26){
      v-=c[i]*(d-last[i]);
    }
    std::cout << v << '\n';
  }
	return 0;
}
