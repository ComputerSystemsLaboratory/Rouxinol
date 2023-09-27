//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
  
int main() {
  long long M, N;
  cin >> N >> M;
  vector<long long> books(N);
  for(int i=0; i<N; i++) {
    cin >> books[i];
  }
      
  unsigned long long l = 1, r = ULLONG_MAX;
  while(r - l > 1) {
    long long m = (l+r)/2;
    int BPS = 0;
    for(int i=0; i<M; i++) {
      long long size = m;
      for(;;) {
        if(BPS == N) break;
        if(size - books[BPS] < 0) break;
        size -= books[BPS++];
      }
      if(BPS == N) break;
    }
    if(BPS == N) {
      r = m;
    } else l = m;
  }
      
  cout << l+1 << endl;
  
    
  return 0;
}