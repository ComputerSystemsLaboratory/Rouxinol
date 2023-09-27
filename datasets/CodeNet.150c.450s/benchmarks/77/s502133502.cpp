#include <bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

int main(void)
{
  int n;
  while(cin >> n){
    if(!n) break;
    bool array[21][21] = {};
	
    for(int i = 0; i < n; i++){
      int a, b; cin >> a >> b;
      array[a][b] = true;
    }
    int x = 10;
    int y = 10;
    int m; cin >> m;
    for(int i = 0; i < m; i++){
      int num;
      char input;
      int h = 0;
      
      cin >> input >> num;

      if(input == 'N') h = 0;
      if(input == 'E') h = 1;
      if(input == 'S') h = 2;
      if(input == 'W') h = 3;
      
      for(int j = 0; j < num; j++){
	x += dx[h];
	y += dy[h];
	if(array[x][y] == true){
	  n--;
	  array[x][y] = false;
	}
      }
    }
    if(!n) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;

}