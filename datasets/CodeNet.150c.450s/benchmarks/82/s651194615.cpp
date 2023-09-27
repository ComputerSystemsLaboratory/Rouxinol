#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define INF ((1<<30)-1)
#define LINF (1LL<<60)
#define EPS (1e-10)
typedef long long Int;
typedef pair<Int, Int> P;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;

struct Dice{
  int s[6];
  void roll(char c){
    int b;
    if(c=='E'){
      b=s[0];
      s[0]=s[3];
      s[3]=s[5];
      s[5]=s[2];
      s[2]=b;
    }
    if(c=='W'){
      b=s[0];
      s[0]=s[2];
      s[2]=s[5];
      s[5]=s[3];
      s[3]=b;
    }
    if(c=='N'){
      b=s[0];
      s[0]=s[1];
      s[1]=s[5];
      s[5]=s[4];
      s[4]=b;
    }
    if(c=='S'){
      b=s[0];
      s[0]=s[4];
      s[4]=s[5];
      s[5]=s[1];
      s[1]=b;
    }
  }
  int top() {
    return s[0];
  }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
     int y[7];
    int x[6][6]={{0,3,5,2,4,0},{4,0,1,6,0,3},{2,6,0,0,1,5},{5,1,0,0,6,2},{3,0,6,1,0,4},{0,4,2,5,3,0}};
    int a,b,c,d;
    int q;
    cin>>y[1]>>y[2]>>y[3]>>y[4]>>y[5]>>y[6];
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        for(int j=1;j<=6;j++){
            if(a==y[j]){
                c=j;
            }
            if(b==y[j]){
                d=j;
            }
        }
        cout<<y[x[c-1][d-1]]<<endl;
    }
    return 0;
}

