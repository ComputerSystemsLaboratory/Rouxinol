#include <iostream>
using namespace std;

int main() {
  int e;
  while (scanf("%d", &e) != EOF && e) {
    int m = 1000;
    for (int z=100; z>=0; z--) {
      if (e < z*z*z) {
	continue;
      }
      for (int y=0; y<m; y++) {
	if (e < y*y + z*z*z) {
	  break;
	}
	int x = e - y*y - z*z*z;
	if (x + y + z < m) {
	  m = x + y + z;
	}
      }      
    }      
    printf("%d\n", m);
  }
}