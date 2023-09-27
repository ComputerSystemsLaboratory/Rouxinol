#include <stdio.h>
#include <string.h>
int main(void) {
  while(1) {
	int n, p;
	scanf("%d%d", &n, &p);
	if (n == p && n == 0) break;
	int man[444] = {0};
	int glass = 0;
	int i = 0;
	glass = p;
	while (1) {
	  //  printf("i = %d  glass = %d  man[i] == %d\n",i,glass,man[i]);
	  if (glass != 0) {
		glass--; man[i]++;
	  }
	  else {
		glass = man[i];
		man[i] = 0;
	  }
	  int flag = 0;
	  for (int j = 0; j < n; j++) {
		if (j != i) {
		  if (man[j] != 0) {
			flag = 1;
			break;
		  }
		}
	  }
		
	  if (flag == 0 && glass == 0) break;
	  i = (1+i)%n;
	}
	printf("%d\n",i);
  }
  return 0;
}