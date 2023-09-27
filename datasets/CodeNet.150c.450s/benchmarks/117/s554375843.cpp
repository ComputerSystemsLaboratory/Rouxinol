
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

static int g_compNum = 0;

void merge(int *array, int left, int mid, int right)
{
  DPRINTF("LEFT %d  MID %d  RIGHT %d\n", left, mid, right);

  // 0, 0, 1
  int n1 = mid - left + 1; // 1
  int n2 = right - (mid + 1) + 1; // 1

  int arrayL[n1 + 1], arrayR[n2 + 1];
  for (int i = 0; i < n1; i++)
    arrayL[i] = array[left + i];

  for (int i = 0; i < n2; i++)
    arrayR[i] = array[(mid + 1) + i];

  arrayL[n1] = INT_MAX;
  arrayR[n2] = INT_MAX;

  int i = 0, j = 0;
  for (int k = 0; k < (right - left + 1); k++)
  {
    DPRINTF("arrayL[%d] %d  arrayR[%d] %d\n", i, arrayL[i], j, arrayR[j]);

    if (arrayL[i] < arrayR[j])
    {
      array[left + k] = arrayL[i];
      i++;
    }
    else
    {
      array[left + k] = arrayR[j];
      j++;
    }
    g_compNum++;
  }

#if DEBUG
  for (int i = 0; i < (right - left + 1); i++)
  {
    if (i == 0) { DPRINTF("%d", array[i]); }
    else  printf(" %d", array[i]);
  }
  cout << endl;
#endif

}

void mergeSort(int *array, int left, int right)
{

  DPRINTF("LEFT %d  RIGHT %d\n", left, right);

  if (left >= right)
    return ;

  int mid = (left + right) / 2;
  mergeSort(array, left, mid);
  mergeSort(array, mid + 1, right);
  merge(array, left, mid, right);
}

int main()
{
  int arrayNum;
  cin >> arrayNum; cin.ignore();

  int array[arrayNum];
  for (int i = 0; i < arrayNum; i++)
    cin >> array[i];

#if DEBUG
  DPRINTF("ARRAY NUM %d\n", arrayNum);
  for (int i = 0; i < arrayNum; i++)
  {
    if (i == 0) { DPRINTF("%d", array[i]); }
    else printf(" %d", array[i]);
  }
  cout << endl;
#endif // DEBUG

  const int left = 0, right = arrayNum - 1;
  mergeSort(array, left, right);

  for (int i = 0; i < arrayNum; i++)
  {
    if (i == 0) printf("%d", array[i]);
    else  printf(" %d", array[i]);
  }
  cout << endl;

  cout << g_compNum << endl;

  return 0;
}

