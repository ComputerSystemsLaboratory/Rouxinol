#include <stdio.h>
#include <string.h>

void island_delete(int data[][60], int w, int h, int self_i, int self_j) {
  data[self_i][self_j] = 0;
  if (self_j-1 >= 0 && data[self_i][self_j-1] == 1) {
	island_delete(data,w,h,self_i,self_j-1);
  }
  if (self_i-1 >= 0 && data[self_i-1][self_j] == 1) {
	island_delete(data,w,h,self_i-1,self_j);
  }
  if (self_j+1 <= w && data[self_i][self_j+1] == 1) {
	island_delete(data,w,h,self_i,self_j+1);
  }
  if (self_i+1 <= h && data[self_i+1][self_j] == 1) {
	island_delete(data,w,h,self_i+1,self_j);
  }

  if (self_j-1 >= 0 && self_i-1 >= 0 && data[self_i-1][self_j-1] == 1) {
	island_delete(data,w,h,self_i-1,self_j-1);
  }
  if (self_j+1 <= w && self_i-1 >= 0 && data[self_i-1][self_j+1] == 1) {
	island_delete(data,w,h,self_i-1,self_j+1);
  }
  if (self_j-1 >= 0 && self_i+1 <= h && data[self_i+1][self_j-1] == 1) {
	island_delete(data,w,h,self_i+1,self_j-1);
  }
  if (self_j+1 <= w && self_i+1 <= h && data[self_i+1][self_j+1] == 1) {
	island_delete(data,w,h,self_i+1,self_j+1);
  }


  
}

int main(void) {
  while(1) {
	int w, h;
	int cnt = 0;
	int data[60][60] = {{0}};
	scanf("%d%d", &w, &h);
	if (w == h && w == 0) break;
	for (int i = 0; i < h; i++) {
	  for (int j = 0; j < w; j++) {
		scanf("%d", &data[i][j]);
	  }
	}
	int self_i, self_j;
	for (int i = 0; i < h; i++) {
	  for (int j = 0; j < w; j++) {
		if (data[i][j] == 1) {
		  self_i = i; self_j = j; cnt++;
		  island_delete(data,w,h,self_i,self_j);
		}
	  }
	}
	printf("%d\n",cnt);
  }
  return 0;
}