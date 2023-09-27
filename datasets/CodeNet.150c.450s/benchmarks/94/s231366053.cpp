#include<stdio.h>

#define MAX_INPUT 100

void inputArray(int array[], int *arraySize);
int bubbleSort(int array[], int arraySize);
void outputArray(int array[], int arraySize);

int main(void)
{
  int size;
  int bubbleArray[MAX_INPUT];
  int sortNum = 0;
  
  //  printf("bubble sort.\n");
  inputArray(bubbleArray, &size);
  sortNum = bubbleSort(bubbleArray, size);

  outputArray(bubbleArray, size);
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
int bubbleSort(int array[], int arraySize)
{
  int sortNum = 0;
  int flag = 1;
  int temp;

  while ( flag ) {
    flag = 0;
    for ( int i = arraySize-1; i > 0; i-- ) {
      if ( array[i] < array[i-1] ) {
	temp = array[i];
	array[i] = array[i-1];
	array[i-1] = temp;
	flag = 1;
	sortNum++;
      }
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