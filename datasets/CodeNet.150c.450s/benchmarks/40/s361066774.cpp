/*
 * a.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

//const int ids[] = {1, 2, 4, 3, 5, 6};

/* typedef */

typedef vector<int> vi;

struct Dice {
  static const int DN = 6;
  vi ds;

  // 0=X+(top), 1=Y+(front), 2=Z+(right), 3=Z-(left), 4=Y-(back), 5=Z-(bottom)
  Dice(vi &_ds): ds(_ds) {}
  Dice(const int _ds[]) { ds.assign(_ds, _ds + DN); }
  //Dice(): ds(ids, ids + DN) {}

  bool operator==(const Dice &d) const {
    for (int i = 0; i < DN; i++)
      if (ds[i] != d.ds[i]) return false;
    return true;
  }

  bool operator<(const Dice &d) const {
    for (int i = 0; i < DN; i++)
      if (ds[i] != d.ds[i]) return (ds[i] < d.ds[i]);
    return false;
  }

  inline int top()    { return ds[0]; }
  inline int front()  { return ds[1]; }
  inline int right()  { return ds[2]; }
  inline int left()   { return ds[3]; }
  inline int back()   { return ds[4]; }
  inline int bottom() { return ds[5]; }
  
  Dice rotx(int n = 1) { // 1, 2, 4, 3
    Dice r(*this);
    while (n--) {
      int t = r.ds[1];
      r.ds[1] = r.ds[3]; r.ds[3] = r.ds[4]; r.ds[4] = r.ds[2];
      r.ds[2] = t;
    }
    return r;
  }

  Dice roty(int n = 1) { // 2, 0, 3, 5
    Dice r(*this);
    while (n--) {
      int t = r.ds[2];
      r.ds[2] = r.ds[5]; r.ds[5] = r.ds[3]; r.ds[3] = r.ds[0];
      r.ds[0] = t;
    }
    return r;
  }

  Dice rotz(int n = 1) { // 0, 1, 5, 4
    Dice r(*this);
    while (n--) {
      int t = r.ds[0];
      r.ds[0] = r.ds[4]; r.ds[4] = r.ds[5]; r.ds[5] = r.ds[1];
      r.ds[1] = t;
    }
    return r;
  }

  void print() {
    for (int i = 0; i < DN; i++) printf("%d", ds[i]); putchar('\n');
  }

  /*
  static void alldices(set<Dice> &s) {
    Dice d;
    for (int z = 0; z < 4; z++) {
      Dice dz = d.rotz(z);
      for (int y = 0; y < 4; y++) {
	Dice dy = dz.roty(y);
	for (int x = 0; x < 4; x++)
	  s.insert(dy.rotx(x));
      }
    }
  }
  */
};

/* global variables */

int ids[6];

/* subroutines */

/* main */

int main() {
  for (int i = 0; i < 6; i++) cin >> ids[i];

  Dice d(ids);

  string s;
  cin >> s;
  int n = s.size();

  for (int i = 0; i < n; i++) {
    if (s[i] == 'E') d = d.roty(3);
    else if (s[i] == 'N') d = d.rotz(3);
    else if (s[i] == 'S') d = d.rotz(1);
    else if (s[i] == 'W') d = d.roty(1);
  }

  printf("%d\n", d.top());
  return 0;
}