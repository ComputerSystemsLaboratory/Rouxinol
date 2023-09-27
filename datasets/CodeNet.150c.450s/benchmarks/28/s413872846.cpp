#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

#define DEBUG (0)

#if DEBUG
#define DPRINTF(...)  printf("D(L%d) %s: ", __LINE__, __func__); printf(__VA_ARGS__)
#else
#define DPRINTF(...)
#endif // DEBUG

void answer1()
{
  int numOfLoad, numOfTrack;
  cin >> numOfLoad >> numOfTrack;
  DPRINTF("numOfLoad %d\n", numOfLoad);
  DPRINTF("numOfTrack %d\n", numOfTrack);

  int sum_of_weight = 0;
  int max_weight_of_load = -1;
  int weight_array[numOfLoad];
  for (int i = 0; i < numOfLoad; i++)
  {
    int weight;
    cin >> weight_array[i];
    sum_of_weight += weight_array[i];
    if (max_weight_of_load < weight_array[i])
      max_weight_of_load = weight_array[i];
  }
  const int average = sum_of_weight / numOfTrack;
  const int init_capacity = max(max_weight_of_load, average);
  DPRINTF("SUM OF WEIGHT %d\n", sum_of_weight);
  DPRINTF("AVERAGE OF WEIGHT %d\n", average);

  bool foundSolution = false;
  int capacityOfTrack = init_capacity;

  const int MAX_NUM_OF_LOAD = 100 * 1000;
  const int MAX_WEIGHT_OF_LOAD = 10 * 1000;
  const int MAX_TRACK_CAPACITY = MAX_NUM_OF_LOAD * MAX_WEIGHT_OF_LOAD;

  while (!foundSolution && capacityOfTrack < MAX_TRACK_CAPACITY)
  {

    int currentCapacity = 0;
    int leftOfTrackNum = numOfTrack - 1;

    DPRINTF("CAPACITY_OF_TRACK %d\n", capacityOfTrack);

    for (int i = 0; i < numOfLoad; i++)
    {

      DPRINTF("LOAD %d  WEIGHT %d\n",  i, weight_array[i]);

      if (currentCapacity + weight_array[i] <= capacityOfTrack)
      {
        currentCapacity += weight_array[i];
      }
      else
      {
        if (leftOfTrackNum > 0) // Start to load to the next track
        {
          leftOfTrackNum--;
          currentCapacity = weight_array[i];
        }
        else // The track capacity is not enough; Increase the capacity and try again
        {
          break;
        }
      }

      if (i == numOfLoad - 1)
        foundSolution = true;

      DPRINTF("CURRENT_CAPACITY %d  LEFT_OF_TRACK_NUM %d\n",
          currentCapacity, leftOfTrackNum);
    }

    if (!foundSolution)
      capacityOfTrack++;
  }

  cout << capacityOfTrack << endl;
}


int numCanTakeLoad(const int capacity, const int numTrack, const int numLoad, const int array_weight[])
{
  int sum = 0, packages = 0;
  int remainingTracks = numTrack - 1;
  for (int i = 0; i < numLoad; i++)
  {
    //DPRINTF("WEIGHT[%d] %d\n", i, array_weight[i]);

    if (array_weight[i] > capacity)
    { // can not load; skip
      ;
    }
    else if (sum + array_weight[i] <= capacity)
    {
      sum += array_weight[i];
      packages++;
    }
    else
    {
      if (remainingTracks > 0)
      {
        sum = array_weight[i];
        remainingTracks--;
        packages++;
      }
      else
      { // no more track to load; finish...
        break;
      }
    }

    //DPRINTF("SUM %d  NUM_TRACK %d\n", sum, remainingTracks);
  }

  DPRINTF("ret %d\n", packages);

  return packages;
}


void answer2()
{
  int numOfLoad, numOfTrack;
  cin >> numOfLoad >> numOfTrack;
  DPRINTF("numOfLoad %d\n", numOfLoad);
  DPRINTF("numOfTrack %d\n", numOfTrack);

  int weights[numOfLoad];
  for (int i = 0; i < numOfLoad; i++) cin >> weights[i];

  const int MAX_WEIGHT = 10 * 1000;
  const int MAX_NUM_OF_LOAD = 100 * 1000;
  const int MIN_CAPACITY = 0;
  const int MAX_CAPACITY = MAX_NUM_OF_LOAD * MAX_WEIGHT;

  int left = MIN_CAPACITY;
  int right = MAX_CAPACITY;

  while (left + 1 < right)
  {
    int mid = (left + right) / 2;

    DPRINTF("LEFT %d  MID %D  RIGHT %d\n", left, mid, right);

    if (numCanTakeLoad(mid, numOfTrack, numOfLoad, weights) == numOfLoad)
      right = mid;
    else
      left = mid;
  }

  DPRINTF("LEFT %d  RIGHT %d\n", left, right);
  if (numCanTakeLoad(left, numOfTrack, numOfLoad, weights) == numOfLoad)
    cout << left << endl;
  else
    cout << right << endl;
}

int main() {
  answer2();
  return 0;
}

