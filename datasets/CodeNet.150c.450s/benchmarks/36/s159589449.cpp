#include <stdio.h>

int main(int argc, char** argv)
{
  int d;
  
  while (fscanf(stdin, "%d", &d) == 1) {
    int s = 0;
    
    for (int i = 0; i < 600 / d; i ++)
      s += i * d * i * d * d;
    
    fprintf(stdout, "%d\n", s);
  }
}