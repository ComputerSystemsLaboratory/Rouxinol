
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
#define MAX 2000000
#define INFTY (1<<30)

int A[MAX], H;

int parent(int i) { return i/2; }
int left(int i) { return i*2; }
int right(int i) { return i*2+1; }

void maxHeapify(int i) {
  int l = left(i);
  int r = right(i);
  int largest;

  if (l <= H && A[l] > A[i]) largest = l;
  else largest = i;
  if (r <= H && A[r] > A[largest]) largest = r;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

// void buildMaxHeap(int A[], int n) {
//   for(int i = n/2; i > 0; i --) {
//     maxHeapify(A, i, n);
//   }
// }

void increaseKey(int i, int key) {
  // if (key < A[i]) return;
  A[i] = key;

  // 親の方が小さい間
  while (i > 1 && A[i/2] < A[i]) {
    swap(A[i], A[i/2]);
    i = i/2;
  }
}

void insert(int key) {
  H ++;
  // A[H] = -INFTY;
  increaseKey(H, key);
}

int extract() {
  int maxv;
  if (H < 1) return -INFTY;
  maxv = A[1];

  // 最後の値を根に移動
  A[1] = A[H--];
  maxHeapify(1);
  return maxv;
}


int main() {
  int key;
  string cmd;
  while(true) {
    cin >> cmd;
    if (cmd == "end") break;
    else if (cmd == "insert") {
      cin >> key;
      insert(key);
    } else if (cmd == "extract") {
      cout << extract() << endl;
    }
  }

  return 0;
}

