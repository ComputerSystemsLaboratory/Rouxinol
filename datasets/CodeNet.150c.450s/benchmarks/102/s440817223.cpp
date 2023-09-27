#include<iostream>
using namespace std;
typedef pair<int, int> pii;
pii dxdy[]={{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
char fld[21][21];
bool used[20][20];
int W, H;

int rec(int i, int j){

   if(fld[i][j]=='#') return 0;
   if(used[i][j]) return 0;
   used[i][j]=true;
   int ret=0;
   for(pii dd: dxdy){
      int ni=i+dd.first;
      int nj=j+dd.second;
      if(!(0<=ni&&ni<H&&0<=nj&&nj<W)) continue;
      ret+=rec(ni, nj);
   }

   return ret+1;
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
               fld[i][j]='.';
            }
         }
      }

      for(int i=0; i<20; i++)for(int j=0; j<20; j++) used[i][j]=false;
      cout<< rec(sy, sx)<< endl;
   }

   return 0;
}