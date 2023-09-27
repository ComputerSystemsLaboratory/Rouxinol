#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int r[100];
  for (int i=0; i<100; i++) r[i] = 0;
  int n;
  while (cin >> n) {r[n-1]++; if(n==0)break;}
  int maxValue = -1;
  for (int i=0; i<100; i++) if (r[i] > maxValue) maxValue = r[i];
  for (int i=0; i<100; i++) if (r[i] == maxValue) cout << i+1 << endl;
  return 0;
}
