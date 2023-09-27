#include <vector>
#include <cstdio>
using namespace std;
 
int main() {
  int n;
  vector<int> S;
  while (scanf("%d", &n) != EOF) {
    if (n == 0) {
      printf("%d\n", S.back());
      S.pop_back();
    } else {
      S.push_back(n);
    }
  }
}