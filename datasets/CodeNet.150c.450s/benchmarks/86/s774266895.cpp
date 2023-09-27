#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int n_player, winner;
  double P;
  while (scanf(" %d %d %lf", &n_player, &winner, &P) == 3) {
    if (n_player == 0 && winner == 0 && P == 0) break;
    winner--;
    //cout << "winner = " << winner << endl;
    int table[n_player];
    double money = 0;
    for (int i = 0; i < n_player; i++) {
      scanf(" %d", &table[i]);
      money += table[i] * 100;
    }
    if (table[winner] == 0) {
      cout << 0 << endl;
      continue;
    }
    //cout << "money = " << money << endl;
    money -= money * (double)(P/100);
    //cout << (double)(P/100) << endl;
    //cout << "money2 = "  << money << endl;
    cout << (int)(money / table[winner]) << endl;
  }
  return 0;
}