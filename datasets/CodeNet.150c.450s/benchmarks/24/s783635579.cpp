#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
int N,M; // N:section M:budget
pair<int,int> buf[10010],PD[10010]; // P:prob. of raid D:distance
int solve();

int main() {
  while (cin >> N >> M && N) {
    int d,p;
    for (int i=0; i<N; ++i) {
      cin >> d >> p;
      buf[i] = make_pair(p,d);
    }
    sort(buf,buf+N);
    for (int i=N-1; i>=0; --i)
      PD[N-1-i] = make_pair(buf[i].first,buf[i].second);
    cout << solve() << endl;
  }
}

int solve() {
  int s = 0;
  for (int i=0; i<N; ++i)
    s += PD[i].first * PD[i].second;
  for (int i=0; i<N; ++i) {
    if (M<=0) break;
    int guarded = min(M,PD[i].second);
    s -= PD[i].first*guarded;
    M -= guarded;
  }
  return s;
}