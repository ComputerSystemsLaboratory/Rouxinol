#include <iostream>
using namespace std;

int islands=0;
int w,h;
int field[50][50];
void bfs(int, int);

int main(){

  while(cin>>w>>h&&w!=0&&h!=0){

    for(int i=0;i<50;i++){
      for(int j=0;j<50;j++){
        field[i][j] = -1;
      }
    }

    for(int j=0;j<h;j++){
      for(int i=0;i<w;i++){
        cin >> field[i][j];
        //        cout << field[i][j] << " ";
      }
      //    cout << endl;
    }
    // cout << endl;
    int ans=0; 

    for(int j=0;j<h;j++){
      for(int i=0;i<w;i++){
        if(field[i][j]==1){
          field[i][j]=0;
          bfs(i,j);
          ans++;
        }
      }
    }
    /*   if(w==5&&h==4){
         for(int i=0;i<w;i++){
         for(int j=0;j<h;j++){
         cout << field[i][j] << " ";
         }
         cout << endl;
         }
         }*/
    cout << ans << endl;
  }

  return 0;
}

void bfs(int x, int y){
  if(x-1>=0&&field[x-1][y]==1){
    field[x-1][y]=0;
    bfs(x-1,y);
  }
  if(x+1<w&&field[x+1][y]==1){
    field[x+1][y]=0;
    bfs(x+1,y);
  }
  if(y-1>=0&&field[x][y-1]==1){
    field[x][y-1]=0;
    bfs(x,y-1);
  }
  if(y+1<h&&field[x][y+1]==1){
    field[x][y+1]=0;
    bfs(x, y+1);
  }
  if(x-1>=0&&y-1>=0&&field[x-1][y-1]==1){
    field[x-1][y-1]=0;
    bfs(x-1,y-1);
  }
  if(x+1<w&&y-1>=0&&field[x+1][y-1]==1){
    field[x+1][y-1]=0;
    bfs(x+1,y-1);
  }
  if(x-1>=0&&y+1<h&&field[x-1][y+1]==1){
    field[x-1][y+1]=0;
    bfs(x-1,y+1);
  }
  if(x+1<w&&y+1<h&&field[x+1][y+1]==1){
    field[x+1][y+1]=0;
    bfs(x+1,y+1);
  }
  return;
}