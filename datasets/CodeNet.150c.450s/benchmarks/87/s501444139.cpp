#include "bits/stdc++.h"
using namespace std;
using ll = long long;

template <typename TYPE>
void print_vec(const vector<TYPE>& v, int num=0){
  if(num == 0) num = (int)v.size();
	for(int i=0; i<num; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename TYPE>
void print_vec2(const vector<vector<TYPE>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}

void calc(int H, int W){
  vector<vector<int>> maze(H, vector<int>(W));
  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cin >> maze[i][j];
    }
  }

  int score = 0;
  int old_score = -1;
  while(score != old_score){
    old_score = score;
    for(int i=0; i<H; i++){

      map<int, int> mp;//カウント
      for(int j=0; j<W; j++) mp[maze[i][j]]++;

      //消滅処理
      for(pair<int, int> p: mp){
        // cout << " p.first: " << p.first << " p.second: " << p.second << endl;
        if(p.second >= 3){
          int cnt = 0;
          for(int j=0; j<W; j++){
            if(maze[i][j] == p.first) cnt++;
            else cnt = 0;

            if(cnt >= 3){
              for(int k=0; k<cnt; k++){
                if(maze[i][j-k] == p.first){
                  score += p.first;
                  maze[i][j-k] = 0;//消滅
                }
                else break;
              }
            }
          }
        }
      }
    }

    //ここまでで消滅と点数計算が終了
    //以下　落下の処理
    for(int i=H-1; i>=0; i--){
      for(int j=0; j<W; j++){
        if(maze[i][j] == 0){
          for(int k=i-1; k>=0; k--){
            if(maze[k][j] != 0){
              maze[i][j] = maze[k][j];
              maze[k][j] = 0;
              break;
            }
          }
        }
      }
    }
  }
  // cout << " maze: "; print_vec2(maze);
  cout << score << endl;
  return;
}

int main(){
  while(true){
    int H;
    cin >> H;
    if(H==0) return 0;
    const int W = 5;
    calc(H, W);
  }
}


