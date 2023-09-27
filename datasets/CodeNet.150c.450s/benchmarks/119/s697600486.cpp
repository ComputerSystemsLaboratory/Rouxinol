#include <bits/stdc++.h>

using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y, vector<vector<bool> >& Cango){
  
  Cango[x][y] = false;
  

  for(int i = 0; i < 8; i++){
    int nextx = x + dx[i];
    int nexty = y + dy[i];
    
    if(Cango[nextx][nexty]) dfs(nextx, nexty, Cango);

  }
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
	int input; cin >> input;
       Cango[i][j] = input;
      }
    }
    
    int counter = 0;

    for(int i = 1; i <= h; i++){
      for(int j = 1; j <= w; j++){
        if(Cango[i][j] == true){
          counter++;
           dfs(i, j, Cango);
         }
       }
     }
    cout << counter << endl;
  }

  return 0;
    
}