#include<bits/stdc++.h>

using namespace std;

struct Dice
{
  int x, y;
  int l, r, f, b, d, u;

  void RollF()
  {
    --y;
    int buff = d;
    d = f;
    f = u;
    u = b;
    b = buff;
  }

  void RollB()
  {
    ++y;
    int buff = d;
    d = b;
    b = u;
    u = f;
    f = buff;
  }

  void RollL()
  {
    --x;
    int buff = d;
    d = l;
    l = u;
    u = r;
    r = buff;
  }

  void RollR()
  {
    ++x;
    int buff = d;
    d = r;
    r = u;
    u = l;
    l = buff;
  }
};


int main()
{
  Dice dice;
  cin >> dice.u;
  cin >> dice.f;
  cin >> dice.l;
  cin >> dice.r;
  cin >> dice.b;
  cin >> dice.d;

  int dd[25][25];

  for(int i = 0; i < 4; i++) {
    dice.RollL();
    for(int j = 0; j < 4; j++) {
      dice.RollB();
      for(int k = 0; k < 4; k++) {
        dice.RollL();
        dd[dice.u][dice.f] = dice.l;
      }
    }
  }

  int Q;
  cin >> Q;
  while(Q--) {
    int u, f;
    cin >> u >> f;
    cout << dd[u][f] << endl;
  }
}