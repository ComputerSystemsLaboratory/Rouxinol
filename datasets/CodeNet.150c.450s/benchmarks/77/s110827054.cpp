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

#define MAX_N 20
#define MAX_M 30

int N;
int trex[MAX_N], trey[MAX_N];
bool tre[MAX_N];
int M;

vector<string> ans_list;

int main(){

  while(true){
    cin >> N;
    if(N == 0)
      break;
    for(int i = 0; i < N; i++){
      cin >> trex[i] >> trey[i];
      tre[i] = true;
    }
    int ans = N;
    cin >> M;
    int px = 10, py = 10;
    for(int num = 0; num < M; num++){
      int dx[] = {0,1,0,-1};
      int dy[] = {1,0,-1,0};
      char dir;
      int dd;
      int d;
      cin >> dir >> d;
      if(dir == 'N')
	dd = 0;
      else if(dir == 'E')
	dd = 1;
      else if(dir == 'S')
	dd = 2;
      else
	dd = 3;
      for(int i = 0; i < d; i++){
	px += dx[dd];
	py += dy[dd];
	for(int j = 0; j < N; j++){
	  if(tre[j] && px == trex[j] && py == trey[j]){
	    ans--;
	    tre[j] = false;
	  }
	}
      }
    }
    if(ans == 0)
      ans_list.push_back("Yes");
    else
      ans_list.push_back("No");
  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i] << endl;
  }

  return 0;

}