#include <iostream>
#include <stack>
#include <queue>
#include <fstream>
using namespace std;

int main(){
  //std::ifstream in("input.txt");
  //std::cin.rdbuf(in.rdbuf());
  int ans[1024] = {0};
  int dataCounter = 0;
  int i = 0;
  while(1){
    int visited[20][20] = {0};
    int data[20][20];
    int x,y;
    int w = 0;
    int h = 0;
    queue<int> xst;
    queue<int> yst;
    cin >> w;
    cin >> h;
    if(w == 0 && h == 0) break;
    for(i=0;i<h;i++){
      int inputCounter = 0;
      char d;
      while(cin >> d){
        if(d == '.')
          data[i][inputCounter] = 0;
        else if(d == '#')
          data[i][inputCounter] = 1;
        else if(d == '@'){
          data[i][inputCounter] = 2;
          x = inputCounter;
          y = i;
        }
        if(inputCounter == w-1)break;
        inputCounter++;
      }
    }
    int j=0;
    xst.push(x);
    yst.push(y);
    while(!xst.empty()){
      x = xst.front();
      y = yst.front();
      xst.pop();
      yst.pop();
      if(x < 0 || w <= x || y < 0 || h <= y)continue;
      if(visited[y][x]==1 || data[y][x] == 1)continue;
      visited[y][x] = 1;
      ans[dataCounter]++;
      xst.push(x+1);
      yst.push(y);
      xst.push(x);
      yst.push(y+1);
      xst.push(x-1);
      yst.push(y);
      xst.push(x);
      yst.push(y-1);
    }

    dataCounter++;
  }
  for(i=0;i<dataCounter;i++){
    cout << ans[i] << endl;
  }
  return 0;
}