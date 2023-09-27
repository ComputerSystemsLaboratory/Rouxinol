#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  
  while(1) {
    cin >> n;
    if(cin.eof()) {
      break;
    }
    int m = (int)sqrt(n);
    
    vector<bool> h(n+1, true);
    h[0] = false;
    h[1] = false;
    
    for(int i = 2; i <= m; i++) {
      if(h.at(i)) {
	for(int s = 2; s*i < h.size(); s++) {
	  if(h.at(s*i))
	    h[s*i] = false;
	}
      }
    }
    
    int ans=0;
    for(auto f : h) {
      if(f)
	ans++;
    }
    cout << ans << endl;
  }
  
  return 0;
}