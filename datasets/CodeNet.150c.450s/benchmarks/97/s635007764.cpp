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
  
#define MAX_N 200

int N;
int n, d;

struct BLOCK{
  int x, y;
}block[MAX_N+1];

vector<P> ans_list;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int main(){
  
  while(true){
    
    cin >> N;
    if(N == 0)
      break;

    block[0].x = block[0].y = 0;

    int WR = 0, WL = 0, HU = 0, HD = 0;

    for(int i = 0; i < N-1; i++){
      cin >> n >> d;
      int X = block[i+1].x = block[n].x + dx[d];
      int Y = block[i+1].y = block[n].y + dy[d];
      WR = max(X, WR);
      WL = min(X, WL);
      HU = max(Y, HU);
      HD = min(Y, HD);
    }

    ans_list.push_back(P(WR-WL+1,HU-HD+1));

  }

  for(int i = 0; i < ans_list.size(); i++){
    cout << ans_list[i].first << " " << ans_list[i].second << endl;
  }

  return 0;
  
}