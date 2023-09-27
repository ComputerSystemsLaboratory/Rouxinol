#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
typedef pair<P, int> PP;

const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int INF = 1 << 10;

vector<string> stage;
vector<vector<int> > visited;

template <typename T> void display(T area, int h, int w){
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      cout << area[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

P getStart(int h, int w, char c){
  bool flag = false;
  P res(INF, INF);
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(stage[i][j] == c){
        res.first = i;
        res.second = j;
        flag = true;
        break;
      }
    }
    if(flag) break;
  }

  return res;
}

void init(int h, int w){
  visited.resize(h);
  for(int i = 0; i < h; i++){
    visited[i].resize(w);
    for(int j = 0; j < w; j++){
      visited[i][j] = INF;
    }
  }
}


int main(){
  int h, w, n;
  cin >> h >> w >> n;
  for(int i = 0; i < h; i++){
    string tmp;
    cin >> tmp;
    stage.push_back(tmp);
  }
  
  P s = getStart(h, w, 'S');

  int ans = 0, power = 0;

  while(1){
    //cout << s.first << " " << s.second << endl;
    if(power == n) break;

    queue<PP > que;
    que.push(PP(s, 1));

    vector<string> tmp(h);
    tmp = stage;

    init(h, w);
    visited[s.first][s.second] = 0;
    
    while(que.size()){
      PP p = que.front(); que.pop();
      P pos = p.first;
      bool goal = false;
      
      //display(tmp, h, w);
      //display(visited, h, w);
      
      for(int i = 0; i < 4; i++){
        int nx = pos.second + dx[i], ny = pos.first + dy[i];
        if(0 <= nx && nx < w && 0 <= ny && ny < h && tmp[ny][nx] != 'X' && visited[ny][nx] == INF){
          if(tmp[ny][nx] == char('0' + power + 1)){
            goal = true;
            s = P(ny, nx);
            break;
          }
          else{
            tmp[ny][nx] = '&';
            visited[ny][nx] = p.second;
            que.push(PP(P(ny, nx), p.second + 1));
          }
        }
      }
      
      if(goal){
        ans += p.second;
        power++;
        break;
      }
    }

    
  }

  cout << ans << endl;
  
  return 0;
}