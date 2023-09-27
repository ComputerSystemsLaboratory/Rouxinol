#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int len[3];  
    for(int j = 0; j < 3; j++) {
      cin >> len[j];
    }    
    sort(len, len+3);
  
    if(len[2]*len[2] == len[0]*len[0] + len[1]*len[1]) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}