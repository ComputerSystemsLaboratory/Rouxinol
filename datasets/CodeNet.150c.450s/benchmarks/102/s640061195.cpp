#include<iostream>
using namespace std;
typedef pair<int, int> pii;
pii dxdy[]={{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
char fld[20][20];
bool used[20][20];
int W, H;

void rec(int i, int j){
   used[i][j]=1;
   for(pii dd: dxdy){
      int ni=i+dd.first;
      int nj=j+dd.second;
      if(!(0<=ni&&ni<H&&0<=nj&&nj<W)) continue;
      if(used[ni][nj]) continue;
      if(fld[ni][nj]!='.') continue;
      rec(ni, nj);
   }
}

int main(){

   while(1){
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

      for(int i=0; i<20; i++)for(int j=0; j<20; j++) used[i][j]=0;
      used[sy][sx]=1;
      rec(sy, sx);
      int ans=0;
      for(int i=0; i<H; i++)for(int j=0; j<W; j++){
         ans+=used[i][j];
      }
      cout<< ans<< endl;

   }

   return 0;
}