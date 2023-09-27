#include<iostream>
#include<queue>
 
using namespace std;
typedef pair<int, int> pii;
pii dxdy[]={{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
char fld[20][20];
int d[20][20];
const int inf=1e8;
 
int main(){
 
   while(1){
      int W, H;
      cin>> W>> H;
      if(!(H||W)) break;
      int sx, sy;
      for(int i=0; i<H; i++){
         for(int j=0; j<W; j++){
            cin>> fld[i][j];
            if(fld[i][j]=='@'){
               sy=i;
               sx=j;
            }
         }
      }
 
      for(int i=0; i<H; i++)for(int j=0; j<W; j++)d[i][j]=inf;
      queue<pii> Q;
      Q.push(pii(sy, sx));
      d[sy][sx]=0;
      while(!Q.empty()){
         pii now=Q.front(); Q.pop();
         for(pii dd: dxdy){
            int ni=now.first+dd.first;
            int nj=now.second+dd.second;
            if(!(0<=ni&&ni<H&&0<=nj&&nj<W)) continue;
            if(fld[ni][nj]=='#') continue;
            if(d[ni][nj]<=d[now.first][now.second]+1) continue;
            d[ni][nj]=d[now.first][now.second]+1;
            Q.push(pii(ni, nj));
         }
      }
 
      int ans=0;
      for(int i=0; i<H; i++)for(int j=0; j<W; j++){
         ans+=(d[i][j]!=inf);
      }
 
      cout<< ans<< endl;
   }
 
   return 0;
}