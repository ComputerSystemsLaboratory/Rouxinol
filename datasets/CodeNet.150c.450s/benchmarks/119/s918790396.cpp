#include<iostream>
using namespace std;

int w,h;
bool map[50][50];

void Del(int x,int y){

  map[y][x]=false;

  if(x!=w-1){
    if(map[y][x+1]==true){
      Del(x+1,y);
    }

    if(y!=0){
      if(map[y-1][x+1]==true){
        Del(x+1,y-1);
      }
    }
    if(y!=h-1){
      if(map[y+1][x+1]==true){
        Del(x+1,y+1);
      }
    }

  }


  if(x!=0){
    if(map[y][x-1]==true){
      Del(x-1,y);
    }
    if(y!=0){
      if(map[y-1][x-1]==true){
        Del(x-1,y-1);
      }
    }
    if(y!=h-1){
      if(map[y+1][x-1]==true){
        Del(x-1,y+1);
      }
    }

  }


  if(y!=h-1){
    if(map[y+1][x]==true){
      Del(x,y+1);
    }
  }
  if(y!=0){
    if(map[y-1][x]==true){
      Del(x,y-1);
    }
  }

}


int main(){


  int sum;

  while(cin >> w >> h){
    if(w==0 && h==0){ break; }

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        cin >> map[i][j];
      }
    }

    sum = 0;

    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if(map[i][j]==1){
          sum++;
          Del(j,i);
        }
      }
    }

    cout << sum << endl;

  }



  return 0;
}