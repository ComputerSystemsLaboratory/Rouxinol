#include <iostream>
#include <stdlib.h> 
using namespace std;

void dfs(int x, int y, char s);

int H,W;
char** field;

int main() {
  while(cin >> H >> W && H && W){
      field =(char**) malloc(sizeof(char*)*H);
    
      for(int i=0; i<H;i++){
          char* row = (char*)malloc(sizeof(char)*W);
          cin >> row;
          field[i] = row;
      }
    
      int result = 0;
    
      for(int i=0; i < H; i++){
          for(int j=0; j < W; j++){
    
              if(field[i][j] == '#' || field[i][j] == '*' || field[i][j]=='@'){
                  dfs(j, i, field[i][j]);
                  result++;
              }
          }
      }
    
      cout << result << endl;

      for(int i=0; i<H; i++){
          free(field[i]);
      }

      free(field);
  }

  return 0;
}

void dfs(int x, int y, char s){

    field[y][x] = '0';

    int pattern[4][2]= { {-1,0}, {1,0}, {0,-1}, {0,1}};

    for(int i = 0; i<4; i++){
    
        int nx = x + pattern[i][0];
        int ny = y + pattern[i][1];
       
        if(0<=nx && nx < W && 0<=ny && ny < H && field[ny][nx]==s){
            dfs(nx,ny,s);
        }
    }
}