#include <bits/stdc++.h>
using namespace std;
 
int main() {
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;
 
    int limit = 24*3600;
    int data[limit];
    for(int i = 0; i < limit; i++) {
      data[i] = 0;
    }
 
    for(int i = 0; i < n; i++) {
      int h, m, s;
      int ss, gs;
      scanf("%d:%d:%d", &h, &m, &s);
      ss = h*3600 + m*60 +s;
      scanf("%d:%d:%d", &h, &m, &s);
      gs = h*3600 + m*60 +s;
      for(int j = ss; j < gs; j++) {
        data[j]++;
      }
    }
 
    int max = -1;
    for(int i = 0; i < limit; i++) {
      if(data[i] > max) max = data[i];
    }
 
    cout << max << endl;
  }
  return 0;
}