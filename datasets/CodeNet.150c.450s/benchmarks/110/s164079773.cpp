#include<bits/stdc++.h>
using namespace std;
typedef long long int64;

int h, w, n, x[11], y[11];
string buff = "S123456789";

char mas[1000][1000];

int bfs(){
  int dy[] = { 0, 1, 0, -1}, dx[] = { 1, 0, -1, 0};
  int min_cost[1000][1000];
  deque< int > quex, quey;

  int ret = 0;
  for(int i = 0; i < n; i++){
    fill_n( *min_cost, 1000 * 1000, 1 << 30);
    quey.push_back(y[i]), quex.push_back(x[i]);
    min_cost[y[i]][x[i]] = 0;
    while(!quey.empty()){
      int py = quey.front(), px = quex.front();
      quey.pop_front(), quex.pop_front();
      if(py == y[i + 1] && px == x[i + 1]){
        ret += min_cost[py][px];
        break;
      }
      for(int i = 0; i < 4; i++){
        int ny = py + dy[i], nx = px + dx[i];
        if(ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
        if(mas[ny][nx] == 'X') continue;
        if(min_cost[py][px] + 1 < min_cost[ny][nx]){
          min_cost[ny][nx] = min_cost[py][px] + 1;
          quey.push_back(ny), quex.push_back(nx);
        }
      }
    }
    quey.clear(), quex.clear();
  }
  return ret;
}

int main()
{
  cin >> h >> w >> n;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      cin >> mas[i][j];
      if(buff.find(mas[i][j]) != string::npos){
        y[buff.find(mas[i][j])] = i;
        x[buff.find(mas[i][j])] = j;
      }
    }
  }
  cout << bfs() << endl;
}