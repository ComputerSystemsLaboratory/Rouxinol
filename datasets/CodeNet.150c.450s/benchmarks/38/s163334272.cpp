#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (auto i=0; i<N; i++) {
    int t[3];
    cin >> t[0] >> t[1] >> t[2];
    sort(t, t+3);
    cout << ( (t[0]*t[0] + t[1]*t[1] == t[2]*t[2]) ? "YES" : "NO" ) << endl;
  }
}