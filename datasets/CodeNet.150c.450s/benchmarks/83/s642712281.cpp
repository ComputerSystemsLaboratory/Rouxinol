//Shunji Lin 08-144505
#include <iostream>
#include <algorithm>

using namespace std;

struct item { // value and weight for each item
  int value; 
  int weight;
};


int grid[100][100001] = {{0}}; // table for DP
item items[100]; // array to store item properties

int main()
{
  int N, W; // no. of inputs, max weight
  cin >> N >> W;

  for (int i = 0; i < N; ++i) {
    cin >> items[i].value >> items[i].weight;
    grid[i][0] = 0; // initialize first column
  }

  for (int i = 0; i <= W; ++i) {
    grid[0][i] = (items[0].weight <= i)?items[0].value:0; //initialize first row
  }

  for(int i = 1; i < N; ++i) {
    for (int j = 1; j <= W; ++j) {
      if (items[i].weight <= j) {
	grid[i][j] = max(items[i].value + grid[i-1][j-items[i].weight], grid[i-1][j]);
      } else {
	grid[i][j] = grid[i-1][j];
      }
    }
  }

    cout << grid[N-1][W] << endl;
  
  return 0;
}