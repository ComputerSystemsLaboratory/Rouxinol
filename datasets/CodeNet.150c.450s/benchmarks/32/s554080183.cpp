#include <iostream>
#include <vector>
#include <algorithm>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
typedef pair<int, int> PII;

int M, NMIN, NMAX, P[200];

int main(void) {
  while(cin >> M >> NMIN >> NMAX, M) {
    REP(i, 0, M) cin >> P[i];

    vector<PII> vec;
    REP(i, NMIN, NMAX + 1) vec.push_back(PII(P[i - 1] - P[i], i));
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    cout << vec[0].second << endl;
  }
}