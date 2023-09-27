#include <cstdio>
#include <algorithm>

using namespace std;

typedef pair<char,int> pci;

int N;
pci A[100], B[100], C[100];

void print(pci X[]) {
  for (int i=0; i<N; i++) {
    if (i > 0) putchar(' ');
    printf("%c%d", X[i].first, X[i].second);
  }
  putchar('\n');
}

bool same(pci X[], pci Y[]) {
  for (int i=0; i<N; i++) {
    if (X[i].first != Y[i].first) return false;
  }
  return true;
}

void bubbleSort(pci X[]) {
  for (int i=0; i<N; i++) {
    bool loop = false;
    for (int j=N-1; j>i; j--) {
      if (X[j-1].second > X[j].second) {
        swap(X[j-1], X[j]);
        loop = true;
      }
    }
    if (!loop) break;
  }
}

void selectionSort(pci X[]) {
  for (int i=0; i<N; i++) {
    int minI = i;
    for (int j=i+1; j<N; j++) {
      if (X[j].second < X[minI].second) minI = j;
    }
    if (minI != i) swap(X[minI], X[i]);
  }
}

int main() {
  scanf("%d", &N);
  for (int i=0; i<N; i++) {
    getchar();
    A[i].first = getchar();
    A[i].second = getchar() - '0';
    B[i] = C[i] = A[i];
  }
  bubbleSort(B); print(B);
  puts("Stable");
  selectionSort(C); print(C);
  if (same(B, C)) puts("Stable");
  else puts("Not stable");
  return 0;
}