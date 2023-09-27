#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...) do { \
    printf("D(L%d) %s: ", __LINE__, __func__); \
    printf(__VA_ARGS__); \
  } while (false)
#else
#define DPRINTF(...)
#endif // DEBUG

int main()
{
  int numOfArray;
  cin >> numOfArray; cin.ignore();

  DPRINTF("NUM OF ARRAY %d\n", numOfArray);

  int max = -1;
  int array[numOfArray];
  for (int i = 0; i < numOfArray; i++)
  {
    cin >> array[i];
    if (array[i] > max)
      max = array[i];
  }

#if DEBUG
  for (int i = 0; i < numOfArray; i++)
    if (i == 0) DPRINTF("%d", array[i]);
    else        printf(" %d", array[i]);
  cout << endl;
#endif // DEBUG

  max++; // make array which ranges 0 to max for index
  int counter[max];
  DPRINTF("MAX NUM %d\n", max);

  // init
  for (int i = 0; i < max; i++)
    counter[i] = 0;

  // count
  for (int i = 0; i < numOfArray; i++)
    counter[array[i]]++;

  // to know how many number of less than i exist at i index
  for (int i = 1; i < max; i++)
    counter[i] += counter[i-1];

#if DEBUG
  for (int i = 0; i < max; i++)
    DPRINTF("counter[%d] %d\n", i, counter[i]);
#endif // DEBUG

  int sortedArray[numOfArray + 1]; // ignore index 0

  for (int i = 0; i < numOfArray; i++)
  {
    sortedArray[counter[array[i]]] = array[i];
    counter[array[i]]--;
    DPRINTF("i %d  array %d  counter %d\n", i, array[i], counter[array[i]]);
  }

  for (int i = 1; i < numOfArray + 1; i++)
  {
    if (i == 1) printf("%d", sortedArray[i]);
    else        printf(" %d", sortedArray[i]);
  }
  cout << endl;

  return 0;
}
