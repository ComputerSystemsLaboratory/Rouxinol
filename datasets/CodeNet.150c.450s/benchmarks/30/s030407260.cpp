#include <cstdio>

int main() {
  int a[120];
  int n;
  
  
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &a[i]);
  }


  int count = 0;
  for (int i=0; i<n; i++) {
    int minj = i;

    for (int j=i; j<n; j++) {
      if (a[j] < a[minj]) {
	minj = j;
      }
    }

    if (a[i] != a[minj]) {
      int tmp = a[i];
      a[i] = a[minj];
      a[minj] = tmp;
      count++;
    }
  }
  
 
  for (int i=0; i<n-1; i++) {
    printf("%d ", a[i]);
  }
  printf("%d\n", a[n-1]);
  printf("%d\n", count);
}