#include <iostream>
using namespace std;

int main() {
  while(true) {
    int n;
    int s[200];
    int max = 0;
    int min = 1000;
    int total = 0;
    cin >> n;
    if(n == 0) break;
    for(int i = 0; i < n; ++i) {
      cin >> s[i];
      if(s[i] > max) max = s[i];
      if(s[i] < min) min = s[i];
      total += s[i];
    }
    cout << ((total - max - min) / (n - 2)) << endl;
  }
  return 0;
}