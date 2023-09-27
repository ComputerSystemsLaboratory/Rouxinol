#include <stdio.h>

void c_copy(int c_tmp[], int data[], int p, int c, int n) {
  int i = 0;
  for (i = 0; i < c; i++) {
    c_tmp[i] = data[n-p+i-c+1];
    //    printf("i =%d n=%d n-p+i-c = %d\n",i,n,n-p+i-c+1);
  }
}

void move(int data[], int p, int c, int n) {
  int i;
  for (i = n-p+1; i < n; i++) {
    data[i-c] = data[i];
  }
}

void tmp_in(int c_tmp[], int data[], int p, int c, int n) {
  int i;  
  for (i = n-c; i < n; i++) {
    data[i] = c_tmp[i-n+c];
  }
}

void print(int data[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ",data[i]);
  }
  puts("");
}

int main(void) {
  int data[200];
  int n[1000];
  int r[1000];
  int p[1000][200];
  int c[1000][200];
  int c_tmp[1000][200];
  int i = 0, j = 0;
  int N;

  while (1) {
    scanf("%d", &n[i]);
    scanf("%d", &r[i]);
    if (n[i] == r[i] && n[i] == 0) {
      break;
    }
    for (j = 0; j < r[i]; j++) {
      scanf("%d", &p[i][j]);
      scanf("%d", &c[i][j]);
    }
    i++;
  }
  N = i;

  
  for (i = 0; i < N; i++) {
    for (j = 0; j < 200; j++) {
      data[j] = j+1;
    }
    for (j = 0; j < r[i]; j++) {
      // print(data, n[i]);//
      
      c_copy(c_tmp[i], data, p[i][j], c[i][j], n[i]);//
      // printf("c_copy = ");
      // print(c_tmp[i], n[i]);//
      
      move(data, p[i][j], c[i][j], n[i]);
      // printf("move\n");
      // print(data, n[i]);
      
      tmp_in(c_tmp[i], data, p[i][j], c[i][j], n[i]);
      //    print(data, n[i]);
      // puts("");
    }
    printf("%d\n",data[n[i]-1]);
  }
  
  return 0;
}