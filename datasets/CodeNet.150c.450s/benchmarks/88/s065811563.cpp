#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int h, w;
  while (scanf("%d%d", &h, &w) != EOF && h && w) {
    int S = h*h+w*w;
    bool finished = false;
    for (int i=h+1; i<=150; i++) {
      int W = S - i*i;
      for (int j=i+1; j<150; j++) {
	if (j * j == W) {
	  finished = true;
	  printf("%d %d\n", i, j);
	  goto END;
	}
      }
    }
    while (!finished) {
      S++;
      for (int i=1; i<=150; i++) {
	for (int j=i+1; j<150; j++) {
	  if (S == i*i+j*j) {
	    printf("%d %d\n", i, j);
	    goto END;
	  } else if (S < i*i+j*j) {
	    break;
	  }
	}
      }
    }
  END: continue;
  }
}