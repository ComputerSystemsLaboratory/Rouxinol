#include <iostream>
using namespace std;

int main() {
  int FLOORS = 3;
  int ROOMS = 10;
  int first_b[FLOORS][ROOMS];
  int second_b[FLOORS][ROOMS];
  int third_b[FLOORS][ROOMS];
  int fourth_b[FLOORS][ROOMS];

  for (int i = 0; i < FLOORS; i++) {
    for (int j = 0; j < ROOMS; j++) {
      first_b[i][j] = 0;
      second_b[i][j] = 0;
      third_b[i][j] = 0;
      fourth_b[i][j] = 0;
    }
  }

  int n, b, f, r, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> b >> f >> r >> v;
    if (b == 1 ) {
      first_b[f-1][r-1] += v;
    } else if (b == 2) {
      second_b[f-1][r-1] += v;
    } else if (b == 3) {
      third_b[f-1][r-1] += v;
    } else if (b == 4) {
      fourth_b[f-1][r-1] += v;
    }
  }


  for (int i = 0; i < FLOORS; i++) {
    for (int j = 0; j < ROOMS; j++) {
      cout << " " << first_b[i][j];
    }
    cout << endl;
  }
  cout << "####################" << endl;
  for (int i = 0; i < FLOORS; i++) {
    for (int j = 0; j < ROOMS; j++) {
      cout << " " << second_b[i][j];
    }
    cout << endl;
  }
  cout << "####################" << endl;
  for (int i = 0; i < FLOORS; i++) {
    for (int j = 0; j < ROOMS; j++) {
      cout << " " << third_b[i][j];
    }
    cout << endl;
  }
  cout << "####################" << endl;
  for (int i = 0; i < FLOORS; i++) {
    for (int j = 0; j < ROOMS; j++) {
      cout << " " << fourth_b[i][j];
    }
    cout << endl;
  }

  return 0;
}