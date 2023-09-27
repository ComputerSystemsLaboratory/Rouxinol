#include <iostream>
#include <vector>
#include <climits>
#include <cstring>
using namespace std;
   
int main() {
  int M, N;
  cin >> N >> M;
  int books[100010];
  memset(books, 0, sizeof books);
  for(int i=0; i<N; i++) {
    cin >> books[i];
  }
       
  int l = 0, r = (int)1e9;
  while(r - l > 1) {
    int m = (l+r)/2;
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