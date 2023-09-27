
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<math.h>
#include<string>
#include<string.h>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<stdlib.h>
#include<iomanip>

using namespace std;

#define ll long long
#define ld long double
#define EPS 0.0000000001
#define INF 1e9
#define MOD 1000000007
#define rep(i,n) for(i=0;i<(n);i++)
#define loop(i,a,n) for(i=a;i<(n);i++)
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)

typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;

int h,w=5;
int v[15][5];

int disappearance(){

  int ret=0;
  int i,j;
  /*
消えるとき
1 2 3 4 5
1 2 3 4
1 2 3
2 3 4
2 3 4 5
3 4 5
   */

  rep(i,h){
    if(v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3] && v[i][3]==v[i][4]
       && v[i][0]!=-1){
      ret+=v[i][0]*5;
      rep(j,5)v[i][j]=-1;
    }
    if(v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3] && v[i][3]!=v[i][4]
       && v[i][0]!=-1){
      ret+=v[i][0]*4;
      rep(j,4)v[i][j]=-1;
    }
    if(v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][0]!=v[i][3]
       && v[i][0]!=-1){
      ret+=v[i][0]*3;
      rep(j,3)v[i][j]=-1;
    }
    if(v[i][0]!=v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3] && v[i][3]==v[i][4]
       && v[i][1]!=-1){
      ret+=v[i][1]*4;
      loop(j,1,5)v[i][j]=-1;
    }
    if(v[i][0]!=v[i][1] && v[i][1]==v[i][2] && v[i][2]==v[i][3] && v[i][3]!=v[i][4]
       && v[i][1]!=-1){
      ret+=v[i][1]*3;
      loop(j,1,4)v[i][j]=-1;
    }
    if(v[i][1]!=v[i][4] && v[i][2]==v[i][4] && v[i][3]==v[i][4]
       && v[i][4]!=-1){
      ret+=v[i][2]*3;
      loop(j,2,5)v[i][j]=-1;
    }
  }

  return ret;
}

void drop(){
  int i,j;
  loop(i,1,h)rep(j,w)if(v[i][j]>0){
    int k=i-1;
    while(k>=0){
      if(v[k][j]!=-1)break;
      k--;
    }
    if(k+1!=i){
      v[k+1][j]=v[i][j];
      v[i][j]=-1;
    }
  }
}


int main(void) {
  int i,j;
  while(1){
    cin>>h;
    if(h==0)break;
    rep(i,15)rep(j,5)v[i][j]=-1;
    rep(i,h)rep(j,w)cin>>v[h-1-i][j];

    int ans=0;

    while(1){

      int t=disappearance();

      if(t==0)break;

      ans+=t;
      
      drop();

    }
    cout<<ans<<endl;
  }
}

