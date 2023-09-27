#include <iostream>
#include <queue>
#include <utility>

using namespace std;
using Point = pair<int,int>;

int map[52][52];

void BFS(const Point &p0){
  queue<Point> q;
  q.push(p0);
  map[p0.first][p0.second] = 0;
  while(!q.empty()){
    auto p = q.front();q.pop();
    int y = p.first , x = p.second;

    for(int i=-1;i<=1;++i){
      for(int j=-1;j<=1;++j){
        if(i==0&&j==0)continue;
        if(map[i+y][j+x]){
          q.push(Point(i+y,j+x));
          map[i+y][j+x] = 0;
        }
      }
    }

  }

}

int main(){
  int w,h;
  while(cin>>w>>h&&w>0&&h>0){

    for(int i=1;i<h+1;++i){
      for(int j=1;j<w+1;++j){
        cin >> map[i][j];
      }
    }


    int num = 0;
    for(int i=1;i<h+1;++i){
      for(int j=1;j<w+1;++j){
        if(map[i][j]){
          BFS(Point(i,j));
          num++;
        }
      }
    }
    cout << num << endl;
  }

  return 0;
}