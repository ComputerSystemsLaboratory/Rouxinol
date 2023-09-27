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
int n;
int cnt=0;
ll A[500000];
ll L[500000/2+2];
ll R[500000/2+2];

void merge(int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  for (size_t i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (size_t i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = LLINF;
  R[n2] = LLINF;
  int i=0;
  int j=0;
  for (size_t k = left; k < right; k++) {
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }
}


void mergesort(int left, int right){
  if (left+1 < right) {
    int mid = (left + right)/2;
    mergesort(left, mid);
    mergesort(mid, right);
    merge(left, mid, right);
  }
}


int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    std::cin >> A[i];
  }

  mergesort(0,n);

  for (size_t i = 0; i < n; i++) {
    if (i!=0) {
      std::cout << " ";
    }
    std::cout << A[i] ;
  }
  std::cout << '\n';

  std::cout << cnt << '\n';

  return 0;
}

