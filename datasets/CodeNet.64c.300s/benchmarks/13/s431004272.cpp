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

const uint64_t kInvalid = 0;

uint64_t calFibonacci(int num, uint64_t *pArray)
{
  if (pArray[num-1] == kInvalid)
    pArray[num-1] = calFibonacci(num-1, pArray);

  if (pArray[num-2] == kInvalid)
    pArray[num-2] = calFibonacci(num-2, pArray);

  return pArray[num-1] + pArray[num-2];
}


int main()
{
  int numOfFibonacci;
  cin >> numOfFibonacci;

  DPRINTF("numOfFibonacci %d\n", numOfFibonacci);

  if (numOfFibonacci <= 1)
  {
    cout << "1" << endl;
    return 0;
  }

  uint64_t fibonacci[numOfFibonacci + 1];

  // init
  for (int i = 0; i <= numOfFibonacci; i++)
  {
    fibonacci[i] = kInvalid;
  }

  fibonacci[0] = 1;
  fibonacci[1] = 1;

  uint64_t ans = calFibonacci(numOfFibonacci, fibonacci);
  cout << ans << endl;

  return 0;
}

