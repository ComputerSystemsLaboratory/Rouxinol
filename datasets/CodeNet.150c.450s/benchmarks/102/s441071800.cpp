#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <queue>

 
using namespace std;
 
#define INF 1000000000
#define EPS 1e-9
#define PI acos(-1)
 
typedef long long ll;

#define MAX_W 20
#define MAX_H 20
int W, H;
int sx, sy;
char maze[MAX_H][MAX_W];

vector<int> ans_list;

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int solve(int x, int y){
  int tmp = 1;
  maze[y][x] = '#';
  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx >= 0 && nx < W && ny >= 0 && ny < H && maze[ny][nx] != '#'){
      tmp += solve(nx, ny);
    }
  }
  return tmp;
}

int main(){

  while(true){
    
    cin >> W >> H;
    if(W == 0 && H == 0)
      break;

    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
	cin >> maze[i][j];
	if(maze[i][j] == '@'){
	  sy = i;
	  sx = j;
	}
      }
    }

    ans_list.push_back(solve(sx, sy));
    
  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}