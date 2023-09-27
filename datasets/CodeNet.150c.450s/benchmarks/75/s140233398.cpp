#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

void maxHeapify(vector<int>& heap, int ix, int size)
{
  int l = 2 * ix, r = 2 * ix + 1;
  int largest = ix;
  if (l <= size && heap[l] > heap[largest]) { largest = l; }
  if (r <= size && heap[r] > heap[largest]) { largest = r; }
  if (ix != largest) {
    swap(heap[ix], heap[largest]);
    maxHeapify(heap, largest, size);
  }
}

void buildHeap(vector<int>& heap, int size)
{
  for (int i = size / 2; i >= 1; --i) {
    maxHeapify(heap, i, size);
  }
}

int main()
{
  int n = 0;
  fscanf(stdin, "%d", &n);
  vector<int> heap(n + 5);
  for (int i = 1; i <= n; ++i) {
    fscanf(stdin, "%d", &heap[i]);
  }
  buildHeap(heap, n);
  for (int i = 1; i <= n; ++i) {
    fprintf(stdout, " %d", heap[i]);
  }
  fprintf(stdout, "\n");
  return 0;
}