#include<iostream>
using namespace std;

int main() {

  int len;
  cin >> len;

  int j = 0, n, seq[len];
  while(cin >> n) {
    seq[j++] = n;
    if (len == j) break; 
  }

  for (int i = len-1; i >= 0; i--) {
    cout << seq[i];
    if (i != 0) cout << " ";
    else cout << endl; 
  }

}