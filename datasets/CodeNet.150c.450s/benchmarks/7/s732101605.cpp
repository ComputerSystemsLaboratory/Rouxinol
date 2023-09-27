#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
#define REP(i,n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
  int num;
  vector<int> v;
  REP(i,10)  {
    scanf("%d", &num);
    v.push_back(num);
  }
  sort(v.begin(), v.end(),greater<int>());
  REP(i,3) printf("%d\n", v[i]);
  return 0;
}