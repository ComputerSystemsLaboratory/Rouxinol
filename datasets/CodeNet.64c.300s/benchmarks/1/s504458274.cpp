#include<stdio.h>
#include<algorithm>

using namespace std;

int partition(int array[], int p, int r) {
  int x = array[r];
  int i = p - 1;
  for(int j = p; j < r; j++) {
    if(array[j] <= x) {
      i++;
      swap(array[i], array[j]);
    }
  }
  swap(array[i + 1], array[r]);
  
  return i + 1;
}


int main(void) {
  int n;
  int array[100000];

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  int index = partition(array, 0, n - 1);

  for(int i = 0; i < n; i++) {
    if(i > 0) {
      printf(" ");
    }


    if(i == index) {
      printf("[%d]", array[i]);
    }
    else {
      printf("%d", array[i]);
    }
  }
  printf("\n");
  return 0;
}