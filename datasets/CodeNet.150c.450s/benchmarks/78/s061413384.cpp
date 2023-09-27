#include <bits/stdc++.h>

using namespace std;

int const MAX = 1000001;
int const INF = 1<<29;
int dpa[MAX+1];
int dpo[MAX+1];

int main() {
  
  
  fill(dpa, dpa+MAX, INF);
  fill(dpo, dpo+MAX, INF);
  
  dpa[0] = dpo[0] = 0;
  
  for(int i=1; ; i++) {
    int n = i*(i+1)*(i+2)/6;
    if(n > MAX) break;
    for(int j=n; j<=MAX; j++) {
      dpa[j] = min(dpa[j], dpa[j-n]+1);
      if(n%2) {
	dpo[j] = min(dpo[j], dpo[j-n]+1);
      }
    }
  }
  
  for(int N; cin >> N && N;) {
    cout << dpa[N] << ' ' << dpo[N] << endl;
  }
  
  
  return 0;
}