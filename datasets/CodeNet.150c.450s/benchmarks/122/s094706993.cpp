#include <algorithm>
#include <iostream>
#include <stdio.h>
using namespace std;
#define INFTY (1 << 30)
#define MAX 2000000

int N = 0;
int left(int i) { return i * 2; }
int right(int i) { return i * 2 + 1; }
int parent(int i) { return i / 2; }

int maxOf3Node(int data[], int base) {
  int l = left(base);
  int r = right(base);
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
  for (int i = N / 2; i > 0; i--)
    maxHeapify(data, i);
}

void insert(int data[], int key) {
  N++;
  data[N] = key;
  int i = N;
  while (i > 1 && data[parent(i)] < data[i]) {
    swap(data[parent(i)], data[i]);
    i = parent(i);
  }
}

int extract(int data[]) {
  int max = data[1];
  data[1] = data[N];
  N--;
  maxHeapify(data, 1);
  return max;
}

void trace(int data[]) {
  for (int i=1;i<=N;i++)
    cout <<" " << data[i];
  cout<< endl;
}

int main() {
  int data[MAX + 1];
  int x;
  char com[20];

  while (true) {
    scanf("%s", com);
    if (com[0] == 'i') { // insert
      scanf("%d", &x);
      insert(data, x);
    } else if (com[1] == 'x') { // extract
      int max = extract(data);
      cout << max << endl;
    } else if (com[0] == 'e') { // end
      break;
    }
  }

  return 0;
}