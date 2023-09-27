#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 500000;
int N;

int left(int i) { return i * 2; }
int rigth(int i) { return i * 2 + 1; }

int maxOf3Node (int data[], int base) {
  int l = left(base);
  int r = rigth(base);
  int leargest;
  if (l <= N && data[l] > data[base])
    leargest = l;
  else
    leargest = base;
  if (r <= N && data[r] > data[leargest])
    leargest = r;
  return leargest;
}

void maxHeapify(int data[], int i) {
  int leargest = maxOf3Node(data, i);
  if (leargest != i) {
    swap(data[leargest], data[i]);
    maxHeapify(data, leargest);
  }
}

void buildMaxHeap(int data[]) {
  for(int i =N/2; i>0; i--)
    maxHeapify(data, i);
}


int main() {
  int data[MAX + 1];
  cin >> N;
  for (int i = 1; i <= N; i++)
    cin >> data[i];

  buildMaxHeap(data);

  for (int i = 1; i <=N; i++) {
    cout << " " << data[i];
  }
  cout << endl;
}