#include <cstdio>
#include <vector>
using namespace std;

void maxHeapify(int i, int heap[], int size)
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
    maxHeapify(largest, heap, size);
  }
}

void buildMaxHeap(int heap[], int size)
{
  for (int i = size / 2; i > 0; i--)
    maxHeapify(i, heap, size);
}

void print(int heap[], int size)
{
  for (int i = 1; i <= size; i++)
    printf(" %d", heap[i]);
  printf("\n");
}

int main()
{
  int size;
  scanf("%d", &size);

  int heap[size + 1];
  for (int i = 1; i <= size; i++)
    scanf("%d", &heap[i]);

  buildMaxHeap(heap, size);
  print(heap, size);

  return 0;
}