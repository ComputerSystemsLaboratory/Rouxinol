#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;

int main(){
  int n, bld, flr, rm, ppl, room[4][3][10] = {};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> bld >> flr >> rm >> ppl;
    room[bld - 1][flr - 1][rm - 1] += ppl;
    room[bld - 1][flr - 1][rm - 1] = max(room[bld - 1][flr - 1][rm - 1], 0);
    room[bld - 1][flr - 1][rm - 1] = min(room[bld - 1][flr - 1][rm - 1], 9);
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << ' ' << room[i][j][k];
      }
      cout << endl;
    }
    if (i != 3) {
      cout << "####################" << endl;
    }
  }
}