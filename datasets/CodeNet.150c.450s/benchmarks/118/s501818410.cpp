#include<bits/stdc++.h>
#define rep(i,n) for(int i=1; i<=n; i++)
using namespace std;
int every=0;
void make(){
  int last=0;
  rep(i,999){
    rep(j,10){
      if (i%3==0) last = 20;
      else if(j%2==0) last=19;
      else last = 20;
      rep(k,last){
        every++;
      }
    }
  }
}
int main(){
  int n;
  cin >> n;
  make();
  rep(i,n){
    int y,m,d,count=0,last;
    cin >> y >> m >> d;
    rep(i,y){
      rep(j,10){
        if(i==y && j==m){
          count += d;
          //cout << every << endl;
          cout << every-count+1 << endl;
          break;
        }
        else{
          if(i%3==0) last=20;
          else if(j%2==0) last=19;
          else last = 20;
        }
        rep(i,last) count++;
      }
    }
  }
  return 0;
}

