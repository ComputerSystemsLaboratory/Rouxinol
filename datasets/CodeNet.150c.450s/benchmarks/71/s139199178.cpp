#include <iostream>
#include <cstdio>

const int N = 9;

int main(void) {
  int n = 0;

  while (scanf("%d", &n) != EOF) {
    int count = 0;
    
    for (int i = 0; i <= N; i++) {
      for (int j = 0; j <= N; j++) {
	for (int k = 0; k <= N; k++) {
	  for (int l = 0; l <= N; l++) {
	    if ((i + j + k + l) == n) {
	      count++;
	    }
	  }
	}
      }
    }

    std::cout << count << std::endl;
  }
   
  return 0;
}