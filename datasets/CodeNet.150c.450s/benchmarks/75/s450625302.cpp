#include<cstdio>
#include<vector>

using namespace std;


void maxHeapify(vector<int>& heap, int i) {
  int left = 2 * i;
  int right = 2 * i + 1;
  int N = (int) heap.size();

  int largest;
  if (left <= N && heap[left] > heap[i]) {
    largest = left;
  }
  else largest = i;
  
  if (right <= N && heap[right] > heap[largest])
    largest = right;

  if (largest != i) {
    swap(heap[i], heap[largest]);
    maxHeapify(heap, largest);
  }
}

void solve(int n) {
  vector<int> heap(n+1);

  for (int i = 1; i <= n; ++i) {
    scanf("%d", &heap[i]);
  }

  for (int i = n/2; i >= 1; --i)
    maxHeapify(heap, i);

  for (int i = 1; i <= n; ++i) {
    printf(" %d", heap[i]);
  }
  printf("\n");
}

int main() {

  int n;
  scanf("%d", &n);

  solve(n);
  return 0;
}

