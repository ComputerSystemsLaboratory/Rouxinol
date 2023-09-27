#include <iostream>
#include <string>
using namespace std;

const int MAX = 5000000;
int H, A[MAX+1];

int parent(int i){
  return i/2;
}
int left(int i){
  return 2*i;
}
int right(int i){
  return 2*i + 1;
}
void maxHeapify(int *A, int i){
  int l = left(i);
  int r = right(i);
  int largest;
  if (l <= H && A[l] > A[i]){
    largest = l;
  } else {
    largest = i;
  }
  if (r <= H && A[r] > A[largest]){
    largest = r;
  }

  if ( largest != i){
    int tmp = A[i];
    A[i] = A[largest];
    A[largest] = tmp;
    maxHeapify(A, largest);
  }
}

void heapIncreaseKey(int *A, int i, int key){
  if(key < A[i]) return;
  A[i] = key;
  while(i > 1 && A[parent(i)] < A[i]){
    int tmp = A[i];
    A[i] = A[parent(i)];
    A[parent(i)] = tmp;
    i = parent(i);
  }
}

void insert(int key){
  H++;
  A[H] = -1;
  heapIncreaseKey(A, H, key);
}

int ExtractMax(int *A){
  int max = A[1];
  A[1] = A[H];
  H--;
  maxHeapify(A, 1);
  return max;
}


int main() {
    ios::sync_with_stdio(false);

    H = 0;
    string s;
    long long k;

    while(cin >> s){
      if(s == "insert") {
        cin >> k;
        insert(k);
      } else if (s == "extract") {
        cout << ExtractMax(A) << endl;
      } else if (s == "end") {
        return 0;
      }
    }


}