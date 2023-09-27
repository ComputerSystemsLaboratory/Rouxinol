#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N;
  while(cin >> N && N){
    vector<vector<int> > xy(21, vector<int>(21, 0));
    for(int i = 0; i < N; i++){
      int x, y;
      cin >> x >> y;
      xy[y][x] = 1;
    }
    int M;
    cin >> M;
    pair<int, int> player_pos = make_pair(10, 10);  //(y, x)
    int get = 0;
    for(int i = 0; i < M; i++){
      char d;
      int l;
      cin >> d >> l;
      if(d == 'N'){
        player_pos.first += l;
        for(int j = player_pos.first - l; j <= player_pos.first; j++){
          if(xy[j][player_pos.second] == 1){
            get++;
            xy[j][player_pos.second] = 0;
          }
        }
      }else if(d == 'S'){
        player_pos.first -= l;
        for(int j = player_pos.first + l; j >= player_pos.first; j--){
          if(xy[j][player_pos.second] == 1){
            get++;
            xy[j][player_pos.second] = 0;
          }
        }
      }else if(d == 'E'){
        player_pos.second += l;
        for(int j = player_pos.second - l; j <= player_pos.second; j++){
          if(xy[player_pos.first][j] == 1){
            get++;
            xy[player_pos.first][j] = 0;
          }
        }
      }else if(d == 'W'){
        player_pos.second -= l;
        for(int j = player_pos.second + l; j >= player_pos.second; j--){
          if(xy[player_pos.first][j] == 1){
            get++;
            xy[player_pos.first][j] = 0;
          }
        }
      }
      // cout << "(" << player_pos.second << ", " << player_pos.first << ")" << endl;
    }
    // cout << get << endl;
    if(get == N)cout << "Yes" << endl;
    else cout << "No" << endl;
  }
}