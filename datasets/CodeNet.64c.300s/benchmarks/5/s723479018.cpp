#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFSIZ 8

int main (int ac, char **av) {
  char readline[BUFSIZ] = {0};
  int mountains[3] = {0};
  while (fgets(readline, BUFSIZ, stdin) != NULL) {
    int x = atoi(readline);
    if (mountains[0] == 0) {
      mountains[0] = x;
    } else {
      int idx = 0;
      for (idx = 0; idx < 3; idx++) {
	if (mountains[idx] < x) {
	  memmove(mountains+idx+1, mountains+idx, sizeof(int) * (2-idx));
	  mountains[idx] = x;
	  break;
	}
      }
    }
  }
  int i=0;
  for (i = 0; i < 3; i++) {
    fprintf(stdout, "%d\n", mountains[i]);
  }
      

  return 0;
}