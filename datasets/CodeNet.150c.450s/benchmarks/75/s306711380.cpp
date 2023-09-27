#include <iostream>
#include <array>

const int maxH = 500000;
using array = std::array<int, maxH>;
using iterator = array::iterator;

auto swap = [](iterator a, iterator b)
            {
              auto tmp = *a;
              *a = *b;
              *b = tmp;
            };

void maxHeapify(iterator begin, iterator end, int i)
{
  auto cur = begin + i -1;
  auto left = begin + 2*i -1;
  auto right = left + 1;

  //std::cout << *cur << ' ' << *left << ' ' << *right << std::endl;

  auto largest = cur;
  if (left < end && *left > *largest)
    largest = left;
  if (right < end && *right > *largest)
    largest = right;

  if (largest != cur)
    {
      swap(cur, largest);
      maxHeapify(begin, end, std::distance(begin, largest)+1);
    }
}

void buildMaxHeap(iterator begin, iterator end)
{
  auto H = std::distance(begin, end);
  for (int i=H/2; i>0; --i)
    {
      maxHeapify(begin, end, i);
    }
}

int main ()
{
  int n;
  std::cin >> n;
  std::array<int, maxH> maxheap;

  for (int i=0; i<n; ++i) std::cin >> maxheap[i];

  buildMaxHeap(maxheap.begin(), maxheap.begin()+n);

  for (int i=0; i<n; ++i)
    std::cout << " " << maxheap[i];
  std::cout << std::endl;
}

