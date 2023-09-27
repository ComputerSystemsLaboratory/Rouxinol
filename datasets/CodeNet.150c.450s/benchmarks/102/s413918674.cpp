#include<iostream>
using namespace std;
typedef pair<int, int> pii;
int dx[]={0, 0, 1, -1};
int dy[]={1, -1, 0, 0};
char fld[20][21];
int used[20][20];
int W, H;

void rec(int i, int j){
   used[i][j]=1;
   for(int k=0; k<4; k++){
      int ni=i+dy[k];
      int nj=j+dx[k];
      if(0<=ni&&ni<H&&0<=nj&&nj<W&&fld[ni][nj]!='#'&&used[ni][nj]==0){
         rec(ni, nj);
      }
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