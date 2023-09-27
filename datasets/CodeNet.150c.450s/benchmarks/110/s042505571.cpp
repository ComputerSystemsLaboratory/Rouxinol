#include <iostream>
#include <cassert>
#include <deque>
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
using namespace std;
int H,W,N;
int area[1000][1000];
int subGoal = 1;
deque<int> posX;
deque<int> posY;
deque<int> step;
void init();
void reset(int st);
int main() {
  cin >> H >> W >> N;
  init();
  int dx[4] = {1,0,-1,0};
  int dy[4] = {0,1,0,-1};
  int x,y,st;
  while(true){
    x = posX.front();
    posX.pop_front();
    y = posY.front();
    posY.pop_front();
    st = step.front();
    step.pop_front();
    rep(i,4){
      int nx = x+dx[i];
      int ny = y+dy[i];
      if(nx<0||nx>=W||ny<0||ny>=H) continue;
      if(area[nx][ny]==subGoal){
        if(subGoal==N){
          cout << st+1 << endl;
          return 0;
        }
        reset(st+1);
        break;
      }
      if(area[nx][ny]>0){
        area[nx][ny] -= 10;
        posX.push_back(nx);
        posY.push_back(ny);
        step.push_back(st+1);
      }
    }
  }
  return 0;
}

void init(){
  char input;
  rep(i,H){
    rep(j,W){
      cin >> input;
      if(input == '.'){
        area[j][i] = 10;
      }else if(input == 'X'){
        area[j][i] = -10;
      }else if(input == 'S'){
        posX.push_back(j);
        posY.push_back(i);
        step.push_back(0);
        area[j][i] = 0;
      }else{
        area[j][i] = (int)(input-'0');
      }
    }
  }
}

void reset(int st){
  posX.clear();
  posY.clear();
  step.clear();
  rep(i,H){
    rep(j,W){
      if(area[j][i] == subGoal){
        posX.push_back(j);
        posY.push_back(i);
        step.push_back(st);
      }else if(area[j][i] > -10&&area[j][i]<=0) area[j][i] += 10;
    }
  }
  subGoal++;
}