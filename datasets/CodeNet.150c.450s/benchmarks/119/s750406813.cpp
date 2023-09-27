#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>

using namespace std;

typedef pair<int, int> p;

int t_x[] = {1, 1, 1, 0, -1, -1, -1, 0};
int t_y[] = {1, 0, -1, -1, -1, 0, 1, 1};

int field[52][52];  

int main()
{
  while (true) {
    memset(field, 0, sizeof field);
    int width, height;
    scanf("%d %d", &width, &height);
    
    if (width == 0 && height == 0) break;
    
    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= width; j++) {
	scanf(" %d", &field[i][j]);
      }
    }
    
    queue<p> que;
    int c = 0;

    for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= width; j++) {
	if (field[i][j] == 1) {
	  c++;
	  que.push(p(i, j));
	  field[i][j] = 0;
	  while (!que.empty()) {
	    p tmp = que.front();
	    que.pop();
	    //field[tmp.second][tmp.first] = 0;
	    //cout << tmp.first << ", " << tmp.second << endl;
	    for (int k = 0; k < 8; k++) {
	      int tx = tmp.second + t_x[k];
	      int ty = tmp.first + t_y[k];
	      //cout << ty << ", "<< tx << " =  "<< field[ty][tx] << endl;
	      if (field[ty][tx] == 1) {
		field[ty][tx] = 0;
		que.push(p(ty, tx));
	      }
	    }
	    //cout << endl;
	    //cout << i << " " << j << endl;
	    for (int k = 1; k <= height; k++) {
	      for (int l = 1; l <= width; l++) {
		//cout << field[k][l] << " ";
	      }
	      //cout << endl;
	    }
	    //cout << endl;
	  }
	}
      }     
    }
    cout << c << endl;
  }
  return 0;
}