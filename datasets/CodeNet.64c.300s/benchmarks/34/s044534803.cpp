#include<stdio.h>

// define
#define MAX_INPUT 1000

// function
void inputArray(int a[], int *num);
void insertionSort(int a[], int num);

int main(void)
{
  int size;
  int input[MAX_INPUT];
  
  inputArray(input, &size);
  insertionSort(input, size);
  
  return 0;
}

void inputArray(int a[], int *num)
{
  //  printf("input array size =\n");
  scanf("%d", num);

  //  printf("input array = \n");
  for ( int i = 0; i < *num; i++ ) {
    scanf("%d", &a[i]);
  }

  for (int k=0; k < *num-1; k++) {
    printf("%d ", a[k]);
  }
  printf("%d\n", a[*num-1]);
}

void insertionSort(int a[], int num)
{
  int v;
  int j;
  
  for (int i=1; i < num; i++) {
    v = a[i];
    j = i - 1;
    while ( (j >= 0) && (a[j] > v) ) {
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;
    
    for (int k=0; k < num-1; k++) {
      printf("%d ", a[k]);
    }
    printf("%d\n", a[num-1]);
  }
}