//Shunji Lin 08-144505
#include <iostream>
#include <string>

using namespace std;

int reachable = 0;

void DFS(int grid[20][20], int visited[20][20],  int row_pos, int col_pos, int H, int W);

void DFS_aux(int grid[20][20], int visited[20][20], int row_pos, int col_pos, int H, int W) {
  if (grid[row_pos][col_pos] && !visited[row_pos][col_pos]) {
    DFS(grid, visited, row_pos, col_pos, H, W);
  }
    
}
	 
void DFS(int grid[20][20], int visited[20][20], int row_pos, int col_pos, int H, int W) {
  visited[row_pos][col_pos] = true;
  reachable += 1;
  if (!(row_pos == 0)) {
    DFS_aux(grid, visited, row_pos-1, col_pos, H, W); //up
  }
  if (!(col_pos == 0)) {
    DFS_aux(grid, visited, row_pos, col_pos-1, H, W); //left
  }
  if (!(row_pos == H-1)) {
    DFS_aux(grid, visited, row_pos + 1, col_pos, H, W); //down
  }
  if (!(col_pos == W-1)) {
    DFS_aux(grid, visited, row_pos, col_pos + 1, H , W); //right
  }
}
      
    


int main() {
  while (true) {
    int grid[20][20] = {{false}};
    int visited[20][20] = {{false}};
    reachable = 0;
    int man_row = -1, man_col = -1;
    int W, H;
    cin >> W >> H;
    if (W == 0 && H == 0) break;
    for (int i = 0; i < H; i++) {
      string line;
      cin >> line;
      for (int j = 0; j < W; j++) {
	if (line[j] == '@') {
	  grid[i][j] = true;
	  man_row = i;
	  man_col = j;
	} else if (line[j] == '.') {
	  grid[i][j] = true;
	}
      }
    }
    /*
    //print out grid
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
	if (grid[i][j] == true) {
	  cout << 'b';
	} else if (grid[i][j] == false) {
	  cout << 'r';
	} 
      }
      cout << endl;
    }
    */
    
    DFS(grid, visited,  man_row, man_col, H, W );
    cout << reachable << endl;
  }
}