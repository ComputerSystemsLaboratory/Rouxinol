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

int partition(int A[], int first, int last){
  int x = A[last];
  int i = first-1;
  for (size_t j = first; j < last; j++) {
    if (A[j]<=x) {
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1], A[last]);
  return i+1;

}

int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n; std::cin >> n;
  int A[100000];
  for (size_t i = 0; i < n; i++) {
    std::cin >> A[i];
  }
  int q = partition(A, 0, n-1);
  for (size_t i = 0; i < n; i++) {
    if (0<i && i<n) {
      std::cout << " ";
    }

    if (i==q) {
      std::cout << "[" << A[i] << "]";
    }else{
      std::cout << A[i];
    }
  }
  std::cout  << '\n';

  return 0;
}

