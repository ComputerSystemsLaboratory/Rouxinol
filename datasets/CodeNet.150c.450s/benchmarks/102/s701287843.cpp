#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int dfs(int x, int y, vector<vector<bool> >& Cango){
  
  int counter = 0;
  Cango[x][y] = false;
  counter++;

  for(int i = 0; i < 4; i++){
    int nextx = x + dx[i];
    int nexty = y + dy[i];
    
    if(Cango[nextx][nexty]) counter += dfs(nextx, nexty, Cango);

  }

  return counter;
}

int main(void)
{
  
  int w, h;
  int si, sj;
  while(1){
    cin >> w >> h;
    if(w == 0 && h == 0) break;

    vector<vector<bool> > Cango(h + 2, vector<bool>(w + 2, false));
    for(int i = 1 ; i <= h; i++){
      for(int j = 1; j <= w; j++){
	char input; cin >> input;
	if(input != '#') Cango[i][j] = true;
	if(input == '@'){
	  si = i;
	  sj = j;
	}
      }
    }
    int ans = dfs(si, sj, Cango);
   
    cout << ans << endl;
  }

  return 0;
    
}