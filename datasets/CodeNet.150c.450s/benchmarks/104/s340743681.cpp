#include <algorithm>

#include <stdio.h>

int main(int argc, char** argv)
{
  int w, n;

  fscanf(stdin, "%d", &w);
  
  int ind[30] = { 1,  2,  3,  4,  5,  6,  7,  8,  9, 10,
		 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
		 21, 22, 23, 24, 25, 26, 27, 28, 29, 30
  };

  fscanf(stdin, "%d", &n);
  
  for (int i = 0; i < n; i ++) {
    int a, b;

    fscanf(stdin, "%d,%d", &a, &b);
    
    std::swap(ind[a - 1], ind[b - 1]);
  }
  
  for (int i = 0; i < w; i ++)
    fprintf(stdout, "%d\n", ind[i]);
}