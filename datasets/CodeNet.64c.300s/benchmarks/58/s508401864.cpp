#include <iostream>
using namespace std;

char F[102][102];

void DFS(int Y,int X,char key){
  if(F[Y][X]!=key)
    return;

  F[Y][X] = '.';

  DFS(Y-1,X,key); //???
  DFS(Y,X+1,key); //???
  DFS(Y+1,X,key); //???
  DFS(Y,X-1,key); //???
}

int main(){
  while(true){
  int N,M;
  cin >> N >> M;
    if(N==0 && M==0)
      break;
  for(int y=1; y<=N; y++)
    for(int x=1; x<=M; x++)
      cin >> F[y][x];

  int count = 0;
  for(int y=1; y<=N; y++){
    for(int x=1; x<=M; x++){
      if(F[y][x]=='@'){
        DFS(y,x,'@');
        count++;
      }else if(F[y][x]=='#'){
        DFS(y,x,'#');
        count++;
      }else if(F[y][x]=='*'){
        DFS(y,x,'*');
        count++;
      }
    }
  }

  cout << count << endl;
  }
  return 0;
}