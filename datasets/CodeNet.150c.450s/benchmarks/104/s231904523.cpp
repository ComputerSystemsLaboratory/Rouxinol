#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int w,n;

  cin >> w >> n;

  vector<int> line(w);
  for(int i = 0; i < w; i++) {
    line[i]=i;
  }
  int t = 0;
  while(t < n) {
    int a,b;
    char c;
    cin >> a >> c  >> b;
    line[a-1] ^= line[b-1];
    line[b-1] ^= line[a-1];
    line[a-1] ^= line[b-1];
    
    t++;
  }

  for(auto l : line)
    cout << l+1 << endl;
  
  return 0;
}