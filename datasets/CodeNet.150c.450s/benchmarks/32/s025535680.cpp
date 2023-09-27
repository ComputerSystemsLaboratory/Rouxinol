#include <bits/stdc++.h>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)

int main(){

  while(1){
    int m,nmin,nmax;
    cin>>m>>nmin>>nmax;
    if(m+nmin+nmax==0)break;
    vector<int> P(m);
    rep(i,m)cin>>P[i];

    int res = -1;
    int diff = 0;
    repl(i,nmin-1,nmax){
      int score = P[i]-P[i+1];
      if(diff<=score){
        diff = score;
        res = i;
      }
    }
    cout<<res+1<<endl;
  }

  return 0;
}

