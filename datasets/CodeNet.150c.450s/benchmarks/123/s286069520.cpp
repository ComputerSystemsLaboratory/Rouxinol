#include <bits/stdc++.h>

int main() {

  const int max = 100000;
  
  bool* p;
  p = new bool[max];

  for(int i = 0; i < max; ++i) {
    p[i] = true;
  }

  p[0] = p[1] = false;
  for(int i = 2; i < max; ++i) {
    if( p[i] ) {
      for(int j = i*2; j < max; j += i) {
	p[j] = false;
      }
    }
  }

  std::vector<int> pv;
  for(int i = 0; i < max; ++i) {
    if( p[i] ) {
      pv.push_back(i);
    }
  }
  
  int N;
  int temp;
  int ans = 0;
  std::cin >> N;

  for(int i = 0; i < N; ++i) {
    std::cin >> temp;
    for(int j = 0; j < pv.size(); ++j) {
      if( temp % pv[j] == 0 && pv[j] != temp ) {
	goto label_1;
      }
    }
    ans += 1;
  label_1:
    ;
  }
    

  std::cout << ans << std::endl;

  delete [] p;
  
  return 0;
}