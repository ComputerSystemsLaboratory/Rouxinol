#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

const int INF = 1e9;
double w, h;

int main() {
  while(1){
    cin>>h>>w;
    if(w==0&&h==0) break;

    int ansh=h, answ=w;
    bool flag =false;
    for(int th = 1; th <= 150; th++){
      for(int tw = 1; tw <= 150; tw++){
        if(tw <= th) continue;
        int sqSize = tw*tw+th*th;
        if(flag){
          if(answ*answ+ansh*ansh > sqSize || (answ*answ+ansh*ansh==sqSize && th < ansh)){
            if(w*w+h*h > sqSize || (w*w+h*h == sqSize && h >= th)) continue;
            ansh = th; answ = tw;
          }
        }else{
          if(answ*answ+ansh*ansh < sqSize || (answ*answ+ansh*ansh==sqSize && th > ansh)){
            ansh = th; answ = tw;
            flag = true;
          }
        }
      }
    }
    cout<<ansh<<" "<<answ<<endl;
  }
  return 0;
}