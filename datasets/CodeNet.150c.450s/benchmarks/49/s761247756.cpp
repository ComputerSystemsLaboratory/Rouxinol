#include <stdio.h>

void B_sort(int data[], int n) {
  int tmp;
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      if (data[i] < data[j]) {
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
      }
    }
  }
}

int ave(int data[], int n) {
  int i;
  int sum = 0;
  int ave;
  for (i = 0; i < n; i++) {
    sum += data[i];
  }
  if (n >= 2) {
    ave = sum/(n-2);
  }
  else {
    ave = sum;
  }
  return ave;
}

int main(void) {
  int n[100] = {0};
  int s[100][100] =  { {0} };
  int i = 0, j = 0;
  
  while (1) {
    scanf("%d", &n[i]);
    if (n[i] == 0) {
      break;
    }
    for (j = 0 ; j < n[i]; j++) {
      scanf("%d", &s[i][j]);
    }
    i++;
  }
  
  i = 0;
  j = 0;

  while (n[i] != 0) {
    B_sort(s[i], n[i]);

    s[i][0] = 0;
    s[i][n[i]-1] = 0;

    printf("%d\n", ave(s[i], n[i]));
    i++;
  }

  return 0;
}