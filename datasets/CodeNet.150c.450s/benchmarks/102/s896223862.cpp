#include <stdio.h>
#include <string.h>
int cnt = 0;
int W, H;

void search(char data[][22], int self_i, int self_j) {
  //  printf("self_i = %d  self_j = %d\n", self_i, self_j);
  data[self_i][self_j] = '#';
  cnt++;
  if (self_i-1 >= 0 && data[self_i-1][self_j] == '.') {
	search(data, self_i-1, self_j);
  }
  if (self_j-1 >= 0 && data[self_i][self_j-1] == '.') {
	search(data, self_i, self_j-1);
  }
  if (self_j+1 <= W && data[self_i][self_j+1] == '.') {
	search(data, self_i, self_j+1);
  }
  if (self_i+1 <= H && data[self_i+1][self_j] == '.') {
	search(data, self_i+1, self_j);
  }
}

int main(void) {
  while(1) {
	cnt = 0;
	scanf("%d%d", &W, &H);
	if (W == H && W == 0) break;
	char data[22][22] = {{0}};
	for (int i = 0; i < H; i++) {
	  scanf("%s", data[i]);
	}
	int self_i, self_j;
	for (int i = 0; i < H; i++) {
	  for (int j = 0; j < W; j++) {
		if (data[i][j] == '@') {
		  self_j = j;
		  self_i = i;
		  goto L1;
		}
	  }
	}
  L1:
	search(data, self_i, self_j);
	printf("%d\n", cnt);


  }
  return 0;
}