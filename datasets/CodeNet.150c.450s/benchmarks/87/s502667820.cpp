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
#define F first
#define S second

using namespace std;

int H, stage[15][10];

int main() {
  while(1){
    cin>>H;
    if(H==0) break;
    REP(i,0,H){
      REP(j,0,5){
        cin>>stage[i][j];
      }
    }

    long long ans = 0;
    while(1){
      //fall
      REP(j,0,5){
        int botom = -1;
        for(int i=H-1; 0<=i; i--){
          if(stage[i][j]==-1){
            botom = i;
            break;
          }
        }
        int pos=botom-1;
        while(0<=pos && 0<botom){
          if(stage[pos][j]!=-1){
            swap(stage[pos][j],stage[botom][j]);
            botom--;
          }
          pos--;
        }
      }

      //delete
      bool flag = true;
      REP(i,0,H){
        int cnt = 1;
        REP(j,1,5){
          if(stage[i][j-1] == stage[i][j]){
            cnt++;
          }else{
            if(cnt>=3 && stage[i][j-1]!=-1){
              REP(k,j-cnt,j){
                ans += stage[i][k];
                stage[i][k] = -1;
                flag = false;
              }
            }
            cnt = 1;
          }
        }
        if(cnt>=3 && stage[i][5-1]!=-1){
          REP(k,5-cnt,5){
            ans += stage[i][k];
            stage[i][k] = -1;
            flag = false;
          }
        }
      }
      if(flag) break;
    }
    cout<<ans<<endl;
  }
  return 0;
}