#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int l = 0, r = 0, u = 0, down = 0;

void dfs(int x, int y, int num, vector<vector<int>> S){
  bool f = false;
  l = min(l, y);
  r = max(r, y);
  u = min(u, x);
  down = max(down, x);
  if(S[num][0] != -1)dfs(x - 1, y, S[num][0], S);
  if(S[num][1] != -1)dfs(x, y + 1, S[num][1], S);
  if(S[num][2] != -1)dfs(x + 1, y, S[num][2], S);
  if(S[num][3] != -1)dfs(x, y - 1, S[num][3], S);
  return;
}

int main(){
  int N;
  while(cin >> N, N){
    r = 0; l = 0; u = 0; down = 0;
    vector<int> n(N), d(N);
    vector<vector<int>> S(N, vector<int>(4, -1));
    for(int i = 1; i <= N - 1; i++){
      cin >> n[i] >> d[i];
      S[n[i]][d[i]] = i;
    }
    dfs(0, 0, 0, S);
    cout << down - u + 1 << " " << r - l + 1 << endl;
  }
}