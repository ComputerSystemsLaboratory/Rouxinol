#include <cstdint>
#include <utility>

using namespace std;

#define PRIORITY_QUEUE_SIZE 2000000

static int64_t max_heap[PRIORITY_QUEUE_SIZE];
static uint64_t heap_size = 0;

static inline int64_t parent(int64_t i)
{
  if (i == 0) return -1;
  return (i - 1) / 2;
}

static inline uint32_t left(uint32_t index)
{
  return index * 2 + 1;
}

static inline uint32_t right(uint32_t index)
{
  return index * 2 + 2;
}

static void insert_at(uint64_t i, int64_t key)
{
  max_heap[i] = key;

  int64_t index = i;
  int64_t parent_index = parent(index);
  while ((parent_index >= 0) && (max_heap[parent_index] < max_heap[index])) {
    swap(max_heap[parent_index], max_heap[index]);
    index = parent_index;
    parent_index = parent(index);
  }
}

void priority_queue_insert(int64_t key)
{
  max_heap[heap_size] = INT64_MIN;
  heap_size++;
  insert_at(heap_size - 1, key);
}

static void heapify(uint32_t top)
{
  uint32_t max = top;

  if (left(top) < heap_size) {
    if (max_heap[max] < max_heap[left(top)]) {
      max = left(top);
    }
  }

  if (right(top) < heap_size) {
    if (max_heap[max] < max_heap[right(top)]) {
      max = right(top);
    }
  }

  if (max != top) {
    swap(max_heap[top], max_heap[max]);
    heapify(max);
  }
}

int64_t priority_queue_extract()
{
  int64_t ret = max_heap[0];
  heap_size--;
  max_heap[0] = max_heap[heap_size];

  heapify(0);

  return ret;
}

#include <cstdio>

int32_t main()
{
  while (true) {
    char command[10];
    scanf("%s", command);

    switch (command[0]) {
    case 'i':
      int64_t val;
      scanf("%ld", &val);
      priority_queue_insert(val);
      break;
    case 'e':
      if (command[1] == 'x') {
        printf("%ld\n", priority_queue_extract());
      } else {
        return 0;
      }
      break;
    }
  }

  return 0;
}