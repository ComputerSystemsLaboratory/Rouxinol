#include <iostream>
#include <string>
#include <vector>
using namespace	std;

int main() {
  int n;
  vector<string> f;

  while(cin >> n, n) {
    for(int i = 0; i < n; i++) {
      string F;
      cin >> F;
      f.push_back(F);
    }

    int cnt = 0;
    if(n > 1) {
      for(int i = 0; i < n-1; i++) {
        if((f[i] == "lu" && f[i+1] == "ru")
           || (f[i] == "ru" && f[i+1] == "lu")) cnt++;
        else if((f[i] == "ld" && f[i+1] == "rd")
                || (f[i] == "rd" && f[i+1] == "ld")) cnt++;
      }
    }
    cout << cnt << endl;
    f.clear();
  }
  return 0;
}
