#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
  vector<int> dice;

  for (int i = 0; i < 6; i++) {
    int in; cin >> in;
    dice.push_back(in);
  }
  
  string action; cin >> action;
  int len = action.length();

  int d[6] = {1, 5, 3, 2, 4, 6};  // top, N, E, S, W, bottom
  for (int i = 0; i < len; i++) {
      int top = d[0];
      int N = d[1];
      int E = d[2];
      int S = d[3];
      int W = d[4];
      int bottom = d[5];
      if (action[i] == 'N') {
	d[5] = N; d[3] = bottom; d[1] = top; d[0] = S;
      } else if (action[i] == 'S') {
	d[5] = S; d[3] = top; d[1] = bottom; d[0] = N;
      } else if (action[i] == 'E') {
	d[2] = top; d[4] = bottom; d[5] = E; d[0] = W;	
      } else if (action[i] == 'W') {
	d[2] = bottom; d[4] = top; d[5] = W; d[0] = E;		
      }
  }

  cout << dice[d[0]-1] << endl;
  return 0;
}