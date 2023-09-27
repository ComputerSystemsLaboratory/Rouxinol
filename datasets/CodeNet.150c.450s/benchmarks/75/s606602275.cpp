#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

void maxHeapify(std::vector<int> &a, int i, int n) {
  int left = 2 * i;
  int right = left + 1;
  // std::cout << left << right << '\n';
  int largest = i;
  if (left <= n && a[left] > a[i]) largest = left;
  if (right <= n && a[right] > a[largest]) largest = right;

  if (largest != i) {
    int temp = a[i];
    a[i] = a[largest];
    a[largest] = temp;
    maxHeapify(a, largest, n);
  }
}

int main() {
  int n;
  std::cin >> n;
  std::vector<int> a(n + 1);
  rep(i, n) std::cin >> a[i + 1];

  // buildMaxHeap(a, n);
  for (int i = n / 2; i >= 1; --i) { maxHeapify(a, i, n); }
  rep(i, n) std::cout << " " << a[i + 1];
  std::cout << '\n';
  return 0;
}

