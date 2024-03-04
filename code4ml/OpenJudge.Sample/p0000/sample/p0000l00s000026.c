#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFSIZ 1024

int main (int ac, char **av) {
  char readline[BUFSIZ] = {0};
  int mountains[10] = {0};
  while (fgets(readline, BUFSIZ, stdin) != NULL) {
    int x = atoi(readline);
    if (mountains[0] == 0) {
      mountains[0] = x;
    } else {
      for (int idx = 0; idx < 10; idx++) {
	if (mountains[idx] < x) {
	  memmove(mountains+idx+1, mountains+idx, sizeof(int) * (9-idx));
	  mountains[idx] = x;
	  break;
	}
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    fprintf(stdout, "%d\n", mountains[i]);
  }
      

  return 0;
}