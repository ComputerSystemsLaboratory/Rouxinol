#include<iostream>
using namespace std;

char Array[2000][2000];
int count;

void DFS(int h,int w,char c){

  if(Array[h][w] != c || Array[h][w] == '.'){
    return;
  }

  char tmp=Array[h][w];

  Array[h][w] = '.';

  DFS(h-1,w,tmp);
  DFS(h,w+1,tmp);
  DFS(h+1,w,tmp);
  DFS(h,w-1,tmp);

}

int main(){
    int H,W;

    while(1){
      cin >> H >> W;

      if(H == 0 && W == 0){
        break;
      }
      for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
          cin >> Array[i][j];
        }
      }

      for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
          if(Array[i][j] != '.'){
            count++;
            DFS(i,j,Array[i][j]);
          }
        }
      }
      cout << count << endl;

      
      count = 0;
  }
    return 0;
}