#include <iostream>
#include <stack>
#include <utility>

using namespace std;

using Point = pair<int,int>;

int main(){
  int W,H;
  while((cin>>W>>H)&&W>0&&H>0){
    int map[22][22]={0};
    int sy,sx;
    for(int i=1;i<=H;++i){
      for(int j=1;j<=W;++j){
        char c;
        cin >> c;
        if(c=='.'){
          map[i][j] = 1;
        }else if(c=='@'){
          map[i][j] = 1;
          sy = i ; sx = j;
        }
      }
    }

    stack<Point> s;
    s.push(make_pair(sy,sx));
    int tile = 0;
    while(!s.empty()){
      auto p = s.top();s.pop();
      int y = p.first , x = p.second;
      if(map[y][x]){
        map[y][x] = 0;
        tile++;
      }else{
        continue;
      }

      s.push(make_pair(y-1,x));
      s.push(make_pair(y+1,x));
      s.push(make_pair(y,x-1));
      s.push(make_pair(y,x+1));
    }

    cout << tile << endl;
  }
  return 0;
}