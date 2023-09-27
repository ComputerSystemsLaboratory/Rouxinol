#include <bits/stdc++.h>
#define REP(a,b,c) for(int a=b; a<(int)c; a++)
#define REPD(a,b,c) for(int a=b; a>(int)c; a--)
#define rep(a,b) REP(a,0,b)
#define repd(a,b) REPD(a,b,0)
typedef long long int ll;
using namespace std;

bool isBig(int h1, int w1, int h2, int w2){
  int t1 = h1*h1+w1*w1, t2 = h2*h2 + w2*w2;
  if(t1 > t2){
    return true;
  }else if(t1 <t2){
    return false;
  }else{
    if(h1 > h2){
      return true;
    }else{
      return false;
    }
  }
}

int main(){
  while(true){
    int w,h;
    cin >> h >> w;
    if(h==0 & w==0)break;
    int t = w*w + h*h;
    int ans_h=150, ans_w=150;
    REP(i,1,150){
      REP(j,i+1,150){
        if(isBig(i,j,h,w)){
          if(isBig(ans_h,ans_w,i,j)){
            ans_h = i;
            ans_w = j;
            //cout << ans_h << " " << ans_w << endl;
          }
          break;
        }
      }
    }
    cout << ans_h << " " << ans_w << endl;

  }
  return 0;
}