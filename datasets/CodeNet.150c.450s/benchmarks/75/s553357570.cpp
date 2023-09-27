#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
typedef long long ll;

int H;

void maxHeapify(int *A, int i) {
  int l = 2 * i;
  int r = 2 * i + 1;
  // ????????????????????????????????§???????????§????????????????????¶
  int largest = -11111;
  if (l <= H && A[l] > A[i]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r <= H && A[r] > A[largest]) {
    largest = r;
  }

  if (largest != i) {// i ???????????????????????§????????´???
    int t = A[i];
    A[i] = A[largest];
    A[largest] = t;

    maxHeapify(A, largest); // ?????°??????????????????
  }
}

void buildMaxHeap(int *A) {
  for (int i = H / 2; i >= 1; i--) {
    maxHeapify(A, i);
  }
}

int main() {
  cin >> H;

  int A[H + 10];
  FOR(i, 1, H + 1) {
    cin >> A[i];
  }

  buildMaxHeap(A);
  FOR(i, 1, H + 1) {
    cout << " " << A[i];
  }
  cout << endl;


  return 0;
}