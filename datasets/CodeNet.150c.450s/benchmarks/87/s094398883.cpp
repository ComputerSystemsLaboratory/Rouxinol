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
#include <fstream>
#include <queue>
#include <complex>
 
#define INF 100000000
#define EPS 1e-9
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
  
#define MAX_H 10
int H;
int maze[MAX_H][5];

vector<int> ans_list;

int main(){

  while(true){
    cin >> H;
    if(H == 0)
      break;

    for(int i = 0; i < H; i++){
      for(int j = 0; j < 5; j++){
	cin >> maze[i][j];
      }
    }

    int ans = 0;

    while(true){

      bool flag = false;
      for(int i = 0; i < H; i++){
	for(int j = 0; j < 3; j++){
	  int num = maze[i][j];
	  if(num == -1)
	    continue;
	  int n;
	  for(n = 0; n + j < 5; n++){
	    if(maze[i][j+n] != num)
	      break;
	  }
	  if(n < 3)
	    continue;
	  ans += num*n;
	  flag = true;
	  for(int k = 0; k < n; k++){
	    maze[i][j+k] = -1;
	  }
	}
      }

      if(!flag)
	break;

      /*
      cout << "消去前" << endl;
      for(int i = 0; i < H; i++){
	for(int j = 0; j < 5; j++){
	  cout << maze[i][j] << " ";
	}
	cout << endl;
      }
      */

      for(int x = 0; x < 5; x++){
	for(int y = H-1; y >= 0; y--){
	  if(maze[y][x] != -1)
	    continue;
	  int n, num = -1;
	  for(n = 1; y-n >= 0; n++){
	    if(maze[y-n][x] != -1){
	      num = maze[y-n][x];
	      maze[y-n][x] = -1;
	      maze[y][x] = num;
	      break;
	    }
	  }
	}
      }

      /*
      cout << "消去後" << endl;
      for(int i = 0; i < H; i++){
	for(int j = 0; j < 5; j++){
	  cout << maze[i][j] << " ";
	}
	cout << endl;
      }
      */

    }

    ans_list.push_back(ans);

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }
  
}