#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...)  printf("D(L%d) %s: ", __LINE__, __func__); printf(__VA_ARGS__)
#else
#define DPRINTF(...)
#endif // DEBUG

void swap(int array[], int i0, int i1)
{
  int temp = array[i1];
  array[i1] = array[i0];
  array[i0] = temp;
}

int partition(int array[], int start, int end)
{
  int pivot = array[end];
  int pos = start - 1;

  for (int i = start; i < end; i++)
  {
    if (array[i] <= pivot)
    {
      pos++;
      swap(array, pos, i);
    }
  }

  swap(array, pos + 1, end);

  return pos + 1;
}

int main()
{
  int numOfArray;
  cin >> numOfArray; cin.ignore();

  int array[numOfArray];
  for (int i = 0; i < numOfArray; i++)
    cin >> array[i];

#if DEBUG
  DPRINTF("numOfArray %d\n", numOfArray);
  for (int i = 0; i < numOfArray; i++)
  {
    if (i == 0) { DPRINTF("%d", array[i]); }
    else        { printf(" %d", array[i]); }
  }
  cout << endl;
#endif

  int start = 0;
  int end = numOfArray - 1;

  int pos = partition(array, start, end);

  DPRINTF("PARTITION POS %d\n", pos);

  for (int i = 0; i < numOfArray; i++)
  {
    if (i > 0)
      cout << " ";

    if (i == pos)
      cout << "[";

    cout << array[i];

    if (i == pos)
      cout << "]";
  }
  cout << endl;

  return 0;
}

