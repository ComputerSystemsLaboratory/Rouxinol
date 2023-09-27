#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, r;

  while(cin >> n >> r, n+r) {
    vector<int> card(n);
    for(int i = 0; i < n; i++) card[i] = n-i;
    for(int i = 0; i < r; i++) {
      int p, c;
      cin >> p >> c;
      vector<int> tmp(p-1);
      for(int j = 0; j < p-1; j++) tmp[j] = card[j];
      for(int j = 0; j < c; j++) card[j] = card[j+p-1];
      for(int j = 0; j < p-1; j++) card[j+c] = tmp[j];
    }
    cout << card[0] << endl;
  }  
}