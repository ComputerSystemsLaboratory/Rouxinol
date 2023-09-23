
#include<stdio.h>


#define MAX_INPUT 100

void inputArray(int array[], int *arraySize);
int selectionSort(int array[], int arraySize);
void outputArray(int array[], int arraySize);

int main(void)
{
  int size;
  int selectionArray[MAX_INPUT];
  int sortNum = 0;
  
  //  printf("selection sort.\n");
  inputArray(selectionArray, &size);
  sortNum = selectionSort(selectionArray, size);

  outputArray(selectionArray, size);
  printf("%d\n", sortNum);
  
  return 0;
}

void inputArray(int array[], int *arraySize)
{
  //  printf("input array size =\n");
  scanf("%d", arraySize);

  //  printf("input array = \n");
  for ( int i = 0; i < *arraySize; i++ ) {
    scanf("%d", &array[i]);
  }
}

// return value is number of change.
int selectionSort(int array[], int arraySize)
{
  int sortNum = 0;
  int temp;
  int minj;

  for ( int i=0; i < arraySize; i++ ) {
    minj = i;
    for ( int j=i; j < arraySize; j++ ) {
      if ( array[j]  < array[minj] ) {
	minj = j;
      }
    }
    if ( minj != i ) {
      temp = array[minj];
      array[minj] = array[i];
      array[i] = temp;
      sortNum++;
    }
  }
  return sortNum;
}

void outputArray(int array[], int arraySize)
{
  for (int i=0; i < arraySize-1; i++) {
    printf("%d ", array[i]);
  }
  printf("%d\n", array[arraySize-1]);
}