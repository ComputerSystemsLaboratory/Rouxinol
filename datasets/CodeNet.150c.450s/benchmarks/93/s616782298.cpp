#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#define INTINF 2147483647
#define LLINF 9223372036854775807
typedef long long ll;
using namespace std;
pair<int, char>  L[100000/2+2];
pair<int, char>  R[100000/2+2];

void merge(std::vector<pair<int, char> > &A, int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  for (size_t i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (size_t i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1].first = INTINF;
  R[n2].first = INTINF;
  int i=0;
  int j=0;
  for (size_t k = left; k < right; k++) {
    if (L[i].first <= R[j].first) {
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }
}

void mergesort(std::vector<pair<int, char> > &A, int left, int right){
  if (left+1 < right) {
    int mid = (left + right)/2;
    mergesort(A, left, mid);
    mergesort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int partition(std::vector<pair<int, char> > &A, int first, int last){
  int x = A[last].first;
  int i = first-1;
  for (size_t j = first; j < last; j++) {
    if (A[j].first<=x) {
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1], A[last]);
  return i+1;
}

void quicksort(std::vector<pair<int, char> > &A, int first, int last){
  if(first<last){
    int q = partition(A, first, last);
    quicksort(A, first, q-1);
    quicksort(A, q+1, last);
  }
}


int main(int argc, char const *argv[]) {
  int n; scanf("%d\n", &n);

  char text; int num;
  pair<int, char> card;
  std::vector<pair<int, char> > A;
  A.reserve(100000);
  std::vector<pair<int, char> > B;
  B.reserve(100000);

  for (size_t i = 0; i < n; i++) {
    std::cin >> text >> num;
    card = make_pair(num, text);
    A.push_back(card);
    B.push_back(card);
  }

  quicksort(A, 0, n-1);
  mergesort(B,0,n);

  bool stable = true;
  for (size_t i = 0; i < n; i++) {
    if (A[i].second!=B[i].second) {
      stable=false;
    }
  }

  if (stable) {
    std::cout << "Stable" << '\n';
  }else{
    std::cout << "Not stable" << '\n';
  }



  for (size_t i = 0; i < n; i++) {
    std::cout << A[i].second << " " << A[i].first << '\n';
  }

  return 0;
}

