#include<iostream>

using namespace std;
int w, h;
int c[50][50];
int dx[]={0, 0, 1, 1, 1, -1, -1, -1};
int dy[]={1, -1, 0, 1, -1, 0, 1, -1};
int used[50][50];

void rec(int i, int j){
   used[i][j]=1;
   for(int k=0; k<8; k++){
      int ni=i+dy[k];
      int nj=j+dx[k];
      if(!(0<=ni&&ni<h&&0<=nj&&nj<w)) continue;
      if(c[ni][nj]&&!used[ni][nj]) rec(ni, nj);
   }
}

int main(){

   while(1){
      cin>> w>> h;
      if(!(w||h)) break;
      for(int i=0; i<h; i++){
         for(int j=0; j<w; j++){
            cin>> c[i][j];
         }
      }

      fill((int*)used, (int*)used+50*50, 0);
      int cnt=0;
      for(int i=0; i<h; i++){
         for(int j=0; j<w; j++){
            if(c[i][j]&&!used[i][j]){
               cnt++;
               rec(i, j);
            }
         }
      }

      cout<< cnt<< endl;
   }

   return 0;
}