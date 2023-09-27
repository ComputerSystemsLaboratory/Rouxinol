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

void printVector(std::vector<int> &A) {
  for (size_t i = 0; i < A.size(); i++) {
    std::cout << A[i];
    if (i<A.size()-1) {
      std::cout << " ";
    }
  }
  std::cout << " " << '\n';
}

void CountingSort(std::vector<int> &A, std::vector<int> &B, int k) {
  std::vector<int> C(k+1, 0);
  int n = A.size();

  for (size_t i = 0; i < n; i++) {
    C[A[i]]++;
  }

  for (size_t i = 1; i <= k; i++) {
    C[i] += C[i-1];
  }

  for (int i = n-1; i >= 0; i--) {
    B[C[A[i]]-1] = A[i];
    C[A[i]]--;
  }
}



int main(int argc, char const *argv[]) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n; std::cin >> n;

  std::vector<int> A, B;
  A.reserve(n); B.reserve(n);

  int tmp, k=0;
  for (size_t i = 0; i < n; i++) {
    std::cin >> tmp;
    k = max(k,tmp);
    A.push_back(tmp);
  }

  CountingSort(A, B, k);

  for (size_t i = 0; i < n; i++) {
    std::cout << B[i];
    if (i<n-1) {
      std::cout << " ";
    }
  }
  std::cout << '\n';

  return 0;
}

