#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a(1000);
int main () {
  while(cin >> n, n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) cin >> a[i];
    
    for(int i = 0; i < n; i++) {
      for(int j  = 0; j < n; j++) {
	if(i != j && min > abs(a[i] - a[j])) {
	  min = abs(a[i] - a[j]);
	}
      }
    }
    cout << min << endl;
  }
}