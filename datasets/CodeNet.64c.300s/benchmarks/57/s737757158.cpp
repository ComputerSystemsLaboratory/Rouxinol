#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define REP(i,n) for(int i=0;i<(n);i++)

int r,c;
int s[25][25211];

int main(){
  while(true){
    scanf("%d%d",&r,&c);
    if(r==0 && c==0)break;
    REP(i,r)REP(j,c)scanf("%d",&s[i][j]);
    int ans = 0;
    REP(msk,1<<r){
      int arr[25];
      REP(i,r)arr[i]=(msk>>i)&1;
      int tmp = 0;
      REP(j,c){
        int k=0;
        REP(i,r)k+=s[i][j]^arr[i];
        tmp+=max(k,r-k);
      }
      ans=max(ans,tmp);
    }
    printf("%d\n",ans);
  }
  return 0;
}