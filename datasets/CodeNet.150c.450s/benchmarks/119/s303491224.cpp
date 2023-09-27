#include <iostream>
using namespace std;

int map[52][52];

void Serch(int i,int j){
  int dis[3] = {-1,0,1};
  map[i][j] = 0;
  for(int p=0;p<3;p++){
      for(int q=0;q<3;q++){
        if(p == 1 && q == 1) continue;
        if(map[i+dis[p]][j+dis[q]] == 1) Serch(i+dis[p],j+dis[q]);
      }
  }

 return;
}

int main(){
  int w,h;

  while(cin >> w >> h){
    int count = 0;
    if(!(w|h)) break;

    for(int i=0;i<w+2;i++)map[0][i] = map[h+1][i] = 0;
    for(int i=0;i<h+2;i++)map[i][0] = map[i][w+1] = 0;

    for(int i = 1;i<h+1;i++){
      for(int j = 1;j<w+1;j++){
        cin >> map[i][j];
      }
    }

    for(int i = 1;i<h+1;i++){
      for(int j = 1;j<w+1;j++){
        if(map[i][j] == 1){
          Serch(i,j);count++;
        }
      }
    }

    printf("%d\n",count);
  }

  return 0;
}