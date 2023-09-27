#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main() {
  int i, j, k, a, b, c, L, f;
  vector<int> v, v2;
     
  while(cin >> c >> L, c||L) {
    for(i = 0; 1; i++) {

      v2.push_back(c);
      
      while(c >= 1) {
	v.push_back(c % 10);
	c /= 10;
      }
      
      while(v.size() < L) {
	v.push_back(0);
      }
      
      sort(v.begin(), v.begin() + L);
      
      a = b = 0;
      for(k = 0; k < L; k++) {
	a += v[k] * pow(10, k);
	b += v[L - k - 1] * pow(10, k);
      }
      
      c = a - b;
      f = 0;
    
      for(j = 0; j < v2.size(); j++) {
	if(c == v2[j]) {
	  f++;
	  break;
	}
      }
      
      if(f) {
	cout << j  << ' ' << c << ' ' << i + 1 - j << endl;
	break;
      }
      v.clear();
      
    }
    v.clear();
    v2.clear();
    
  } 
  return 0;
}

      