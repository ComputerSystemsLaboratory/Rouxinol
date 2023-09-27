#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int a, L;
  while(scanf("%d%d", &a, &L) != EOF && L) {
    map<int, int> M; // (a_i, i)
    int i=0;
    while (M.count(a) == 0) {
      M.insert(make_pair(a, i));
      i++;
      string S = to_string(a); // C++11追加要素
      S += string(L - S.size(), '0'); // 0を付け加えてL桁に。
      sort(S.begin(), S.end());
      int min = stoi(S);
      reverse(S.begin(), S.end());
      int max = stoi(S);
      a = max - min;
      // cerr << "max=" << max << ", min=" << min << ", a=" << a << endl;
    }
    printf("%d %d %d\n", M[a], a, i-M[a]);
  }
}