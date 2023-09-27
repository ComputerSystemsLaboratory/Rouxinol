#include <iostream>
using namespace std;

const int MAX=100000;

struct Card {
  char suit;
  int value;
};

struct Card L[MAX/2+2], R[MAX/2+2];

inline void merge(struct Card A[], int n, int left, int mid, int right){
  int i, j, k;
  int n1 = mid -left;
  int n2 = right -mid;
  for(i=0; i<n1; i++) L[i] = A[left+i];
  for(i=0; i<n2; i++) R[i] = A[mid+i];
  L[n1].value = R[n2].value = 2000000000;
  i = j = 0;
  for(k = left; k < right; k++){
    if(L[i].value <= R[j].value){
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
  }
}

inline void merge_sort(struct Card A[], int n, int left, int right){
  int mid;
  if(left + 1 < right){
    mid = (left + right)/2;
    merge_sort(A, n, left, mid);
    merge_sort(A, n, mid, right);
    merge(A, n, left, mid, right);
  }
}

inline int partiton(struct Card A[], int n, int p, int r){
  int i, j;
  struct Card t, x;
  x = A[r];
  i = p-1;
  for ( j=p; j<r; j++){
    if(A[j].value <= x.value){
      i++;
      t = A[i];
      A[i] = A[j];
      A[j] = t;
    }
  }
  t = A[i+1];
  A[i+1] = A[r];
  A[r] = t;
  return i+1;
}

inline void quick_sort(struct Card A[], int n, int p, int r){
  int q;
  if(p < r){
    q = partiton(A, n, p, r);
    quick_sort(A, n, p, q-1);
    quick_sort(A, n, q+1, r);
  }
}

int main() {
    ios::sync_with_stdio(false);
    int n, v;
    struct Card A[MAX], B[MAX];
    char chr;
    bool is_stable = true;

    cin >> n;

    for(int i=0; i<n; i++){
      cin >> chr >> v;
      A[i].suit = B[i].suit = chr;
      A[i].value = B[i].value = v;
    }

    merge_sort(A, n, 0, n);
    quick_sort(B, n, 0, n-1);

    for(int i=0; i<n; i++){
      if(A[i].suit != B[i].suit) is_stable = false;
    }

    if(is_stable) cout << "Stable\n";
    else cout << "Not stable\n";
    for(int i=0; i<n; i++){
      cout << B[i].suit << " " << B[i].value << "\n";
    }


}