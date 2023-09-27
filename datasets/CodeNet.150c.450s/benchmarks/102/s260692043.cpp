#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector> 
using namespace std;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

string map[20];
int W, H;

int dfs(int y, int x){
  
  int count = 1;
  int i;
  for(i = 0;i < 4;i++){
    int next_x = x + dx[i] ,next_y = y + dy[i];
    if(0 <= next_x && next_x < W && 0 <= next_y && next_y < H && map[next_y][next_x] == '.'){
      map[next_y][next_x] = 'a';
      count += dfs(next_y, next_x);
    }
  }
  return count;
}


int main(){
  int i, j, x, y;
  while(1){
    cin >> W >> H;
    if(W == 0 && H == 0) break;
    bool start = false;
    for(i = 0;i < H;i++){
      cin >> map[i];
      
    }

    for(i = 0;i < H;i++){
      for(j = 0;j < W;j++){
        if(map[i][j] == '@'){
          x = j;
          y = i;
          start = true;
          break;
        }
      }
      if(start) break;
    }

    cout << dfs(y, x) << endl;

    
  }

  return 0;
}