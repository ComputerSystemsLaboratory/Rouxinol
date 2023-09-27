#include <iostream>
#include <vector>
using namespace std;

#define INF 2000000001

int main() {
  int n; cin >> n;
  // ???i/2??????2??i???2??i+1
  vector<int> heaps(n+1);
  for(int i=1;i<n+1;i++) {
    cin >> heaps[i];
  }
  for(int i=1;i<n+1;i++) {
    // node i: key = k, parent key = pk, left key = lk, right key = rk,
    // pk = ???i/2???, lk = 2??i, rk = 2??i+1
    int k = heaps[i];
    int pk = INF;
    if(i != 1) pk = heaps[i / 2];
    int lk = INF;
    if(2*i <= n) lk = heaps[2 * i];
    int rk = INF;
    if(2*i+1 <= n) rk = heaps[2 * i + 1];

    cout << "node " << i << ": key = " << k << ", ";
    if(pk != INF) cout << "parent key = " << pk << ", ";
    if(lk != INF) cout << "left key = " << lk << ", ";
    if(rk != INF) cout << "right key = " << rk << ", ";
    cout << endl;
  }
}