#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

struct PriorityQueue
{
  int heap[2000001];
  int size = 0;

  void maxHeapify(int i)
  {
    int left = i * 2;
    int right = i * 2 + 1;
    int largest;

    if (left <= size && heap[left] > heap[i])
      largest = left;
    else
      largest = i;
    if (right <= size && heap[right] > heap[largest])
      largest = right;

    if (largest != i)
    {
      swap(heap[i], heap[largest]);
      maxHeapify(largest);
    }
  }

  void insert(int n)
  {
    size++;
    heap[size] = n;
    int i = size;
    while (i > 1 && heap[i / 2] < heap[i])
    {
      swap(heap[i], heap[i / 2]);
      i /= 2;
    }
  }

  int extract()
  {
    if (size < 1)
      return -1;
    int max = heap[1];
    heap[1] = heap[size];
    size--;
    maxHeapify(1);
    return max;
  }
} pq;

int main()
{
  int tmp;
  char order[7];

  while (true)
  {
    scanf("%s", order);
    if (order[2] == 'd')
      break;
    if (order[0] == 'i')
    {
      scanf("%d", &tmp);
      pq.insert(tmp);
    }
    else
      printf("%d\n", pq.extract());
  }

  return 0;
}