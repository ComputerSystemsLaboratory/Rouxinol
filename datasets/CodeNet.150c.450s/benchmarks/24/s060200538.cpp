#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

class Route
{
private:
  int m_d;
  int m_p;
public:
  void setD(int d);
  void setP(int p);
  int getD();
  int getP();
  Route(int d, int p) {
    setD(d);
    setP(p);
  }
};

void Route::setD(int d) {
  m_d = d;
}

void Route::setP(int p) {
  m_p = p;
}

int Route::getD() {
  return m_d;
}

int Route::getP() {
  return m_p;
}

int main() {
  int N, M, d, p, p_sum;
  while (cin >> N >> M, N | M) {
    vector<Route> routes;
    while (N--) {
      cin >> d >> p;
      routes.pb(Route(d, p));
    }
    for (int i = 0; i < routes.size(); i++) {
      for (int j = i+1; j < routes.size(); j++) {
        if (routes[i].getP() < routes[j].getP()) {
          swap(routes[i], routes[j]);
        }
      }
    }
    for (int i = 0; i < routes.size(); i++) {
      if (M > routes[i].getD()) {
        M -= routes[i].getD();
        routes[i].setD(0);
      } else {
        routes[i].setD(routes[i].getD()-M);
        M = 0;
      }
    }
    p_sum = 0;
    for (int i = 0; i < routes.size(); i++) {
      p_sum += routes[i].getD() * routes[i].getP();
    }
    cout << p_sum << el;
  }
}