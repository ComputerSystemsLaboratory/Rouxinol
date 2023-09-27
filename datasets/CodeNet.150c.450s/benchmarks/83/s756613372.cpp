
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct item { // value and weight for each item
  int value; 
  int weight;
};





int main()
{
  int N, W; // no. of inputs, max weight
  cin >> N >> W;

  vector< vector<int> > grid(N, vector<int>(W+1, 0)); // table for DP
  
  
  vector<item> items(N); // array to store item properties

  for (int i = 0; i < N; ++i) {
    int value, weight;
    cin >> value >> weight;
    item cur_item = {value, weight};
    items[i] = cur_item;
    //grid[i][0] = 0; // initialize first column
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