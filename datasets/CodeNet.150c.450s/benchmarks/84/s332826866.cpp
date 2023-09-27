
#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <climits>
#include <algorithm>
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

static uint64_t g_numOfInv = 0;

void mergeSort(int array[], int helper[], int start, int end)
{

  if (!(start + 1 < end))
    return;

  int mid = (start + end) / 2;

  mergeSort(array, helper, start, mid);
  mergeSort(array, helper, mid, end);

  DPRINTF("START %d  MID %d  END %d\n", start, mid, end);

#if DEBUG
  for (int i = start; i < end; i++)
  {
    if (i == start) DPRINTF("Before: %d", array[i]);
    else            printf(" %d", array[i]);
  }
  cout << endl;
#endif // DEBUG

  for (int i = start; i < end; i++)
    helper[i] = array[i];

  int i = start;
  int left = start;
  int right = mid;

  while (left < mid && right < end)
  {
    if (helper[left] < helper[right])
    {
      array[i] = helper[left];
      i++;
      left++;
    }
    else
    {
      array[i] = helper[right];

      int numOfSkip = mid - left;
      g_numOfInv += numOfSkip;

      DPRINTF("g_numOfInv %d (+= %d - %d)\n", g_numOfInv, mid, left);

      i++;
      right++;
    }
  }

  DPRINTF("i %d  left %d  right %d\n", i, left, right);

  while (left < mid)
  {
    array[i] = helper[left];
    i++;
    left++;
  }

#if DEBUG
  for (int i = start; i < end; i++)
  {
    if (i == start) DPRINTF("After: %d", array[i]);
    else            printf(" %d", array[i]);
  }
  cout << endl;
#endif // DEBUG
}

int main()
{
  int numOfArray;
  cin >> numOfArray; cin.ignore();

  DPRINTF("NUM OF ARRAY %d\n", numOfArray);

  int array[numOfArray];
  for (int i = 0; i < numOfArray; i++)
    cin >> array[i];

#if DEBUG
  for (int i = 0; i < numOfArray; i++)
  {
    if (i == 0) DPRINTF("%d", array[i]);
    else        printf(" %d", array[i]);
  }
  cout << endl;
#endif // DEBUG

  const int start = 0;
  const int end = numOfArray;
  int helper[numOfArray];

  mergeSort(array, helper, start, end);

#if DEBUG
  for (int i = 0; i < numOfArray; i++)
  {
    if (i == 0) DPRINTF("%d", array[i]);
    else        printf(" %d", array[i]);
  }
  cout << endl;
#endif // DEBUG

  cout << g_numOfInv << endl;

  return 0;
}

