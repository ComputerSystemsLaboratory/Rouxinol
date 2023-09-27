#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i=0; i<n; i++) {
    cin >> a[i];
  }
  for (int i=0; i<n-k; i++) {
    if (a[i]<a[i+k]) printf("Yes\n");
    else printf("No\n");
  }
}