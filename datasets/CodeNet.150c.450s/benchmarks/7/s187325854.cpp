#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main () {
  vector<int> v;
  for (int i = 0; i < 10; i++) {
    int t;
    scanf("%d", &t);
    v.push_back(t);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < 3; i++) {
    printf("%d\n", v[9 - i]);
  }
}