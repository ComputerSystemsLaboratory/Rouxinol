#include <iostream>
#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int main()
{
  int a[4], b[4];
  set<int> A, B;
  while (scanf("%d ", &a[0]) == 1) {
    A.clear(), B.clear();
    for (int i = 1; i < 4; i++) {
      scanf("%d ", &a[i]);
      A.insert(a[i]);
    }
    for (int i = 0; i < 4; i++) {
      scanf("%d ", &b[i]);
      B.insert(b[i]);
    }
    int hit = 0, blow = 0;
    for (int i = 0; i < 4; i++) {
      if (a[i] == b[i]) {
	hit++;
      }
    }
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
	if (b[i] == a[j]) {
	  blow++;
	}
      }
    }
    
    printf("%d %d\n", hit, blow - hit);
  }
}