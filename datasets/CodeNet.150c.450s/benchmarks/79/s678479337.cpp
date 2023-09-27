#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N, R, P, C;
  while (cin >> N && cin >> R && N > 0 && R > 0) {
    int n[N];
    for (int i = 0; i < N; i++) n[i] = N-i;

    while (R > 0) {
      cin >> P; 
      cin >> C;
      rotate(n, n+P-1, n+P+C-1);
      R--;
    }
        cout << n[0] << endl;
  }
  
}