#include<iostream>
using namespace std;

bool map[20][20];
int w,h;


int Search(int x,int y, int sum){

  sum++;
  map[y][x]=false;

//  cout << "x,y=" << x << ',' << y << endl;

  if(x!=w-1){
    if(map[y][x+1]==true){
      sum = Search(x+1,y,sum);
    }
  }
  if(x!=0){
    if(map[y][x-1]==true){
      sum = Search(x-1,y,sum);
    }
  }
  if(y!=h-1){
    if(map[y+1][x]==true){
      sum = Search(x,y+1,sum);
    }
  }
  if(y!=0){
    if(map[y-1][x]==true){
      sum = Search(x,y-1,sum);
    }
  }

  return sum;

}


int main(){

  int x,y;
  char info;

  while(cin >> w >> h){
    if(w==0 && h==0){ break; }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
          cin >> info;
          if(info == '.'){ map[i][j]=true;}
          else if(info == '#'){ map[i][j]=false;}
          else{ x=j; y=i; map[i][j]=false;}
        }
    }

    cout << Search(x,y,0) << endl;
  }

  return 0;

}