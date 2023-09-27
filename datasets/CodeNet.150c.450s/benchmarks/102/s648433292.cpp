#include<iostream>
#include<string>
#include<queue>
#include <utility>
#include <functional>
//#include<>
using namespace std;

const int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};
//#define int long long;
signed main(){
  int w, h;
  while(cin >> w >> h, w){
    int cnt{};
    vector<string> v(h);
    for(int i = 0; i < h; ++i){
      cin >> v[i];
    }
    //initialize
    pair<int, int> p;
    queue<pair<int, int>> q;	
    for(int i = 0; i < h; ++i){
      for(int j = 0; j < w; ++j){
	if(v[i][j] == '@'){
	  p = make_pair(i,j);
	  q.push(p);
	}
      }
    }
    while(!q.empty()){
      pair<int, int> p;
      p = q.front();
      q.pop();

      for(int k = 0; k < 4; ++k){
	int x = p.first + dx[k]; int y = p.second + dy[k];
	if(0 > x || h <= x || 0 > y || w <= y)continue;
	if('.' == v[x][y]){
	  v[x][y] = '@';
	  ++cnt;
	  q.push(make_pair(x, y));
	}
      }
    }
    cout << cnt+1 << endl;
  }
  return 0;
}


