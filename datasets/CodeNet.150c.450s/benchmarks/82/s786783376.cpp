#include <iostream>
#include <vector>

using namespace std;

int d[7][7] = {    // front, top
  0, 0, 0, 0, 0, 0, 0,   // 0
  0, 0, 4, 2, 5, 3, 0,   // 1  
  0, 3, 0, 6, 1, 0, 4,   // 2
  0, 5, 1, 0, 0, 6, 2,   // 3
  0, 2, 6, 0, 0, 1, 5,   // 4
  0, 4, 0, 1, 6, 0, 3,   // 5
  0, 0, 3, 5, 2, 4, 0,   // 6
};

int main(int argc, char* argv[]) {
  vector<int> dice;

  for (int i = 0; i < 6; i++) {
    int in; cin >> in;
    dice.push_back(in);
  }
  
  int q; cin >> q;

  for (int i = 0; i < q; i++) {
    int top, front; cin >> top >> front;

    int f = -1, t = -1;
    for (int j = 0; j < 6; j++) {
      if (dice[j] == top) {
	t = j+1;
      } else if (dice[j] == front) {
	f = j+1;
      }
    }
    cout << dice[d[f][t]-1] << endl;
  }

  return 0;
}