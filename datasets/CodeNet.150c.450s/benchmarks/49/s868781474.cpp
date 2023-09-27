#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
  for(;;) {
    int n;
    cin >> n;
    if(n == 0) break;
    vector<int> ss;
    for(int i = 0; i < n; i++) {
      int s;
      cin >> s;
      ss.push_back(s);
    }
    sort(ss.begin(), ss.end());
    int sc = 0;
    for(int i = 1; i < n-1; i++) {
      sc += ss[i];
    }
    cout << (sc / (n-2)) << endl;
  }
  return 0;
}