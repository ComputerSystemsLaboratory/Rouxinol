/**
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B&lang=jp
 */

#include <iostream>
#include <limits>
#include <sstream>
#include <vector>
#include <iterator>

void printVector(const std::vector<unsigned int> &v) {
  std::ostringstream oss;
  std::copy(v.begin(), v.end() - 1,
            std::ostream_iterator<unsigned int>(oss, " "));
  oss << v.back();
  std::cout << oss.str() << std::endl;
}

unsigned int Count = 0;

void merge(std::vector<unsigned int> &A, const unsigned int &left,
           const unsigned int &mid, const unsigned int &right) {
  unsigned int n1 = mid - left;  // 5 - 0
  unsigned int n2 = right - mid; // 9 - 6
  // L[0...n1], R[0...n2] ?????????
  std::vector<unsigned int> L(n1 + 1); // 0 1 2 3 4 MAX
  std::vector<unsigned int> R(n2 + 1); // 5 6 7 8 9 MAX

  for (size_t i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  for (size_t i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  L[n1] = std::numeric_limits<unsigned int>::max();
  R[n2] = std::numeric_limits<unsigned int>::max();
  unsigned int i = 0;
  unsigned int j = 0;
  for (size_t k = left; k < right; k++) {
    Count++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(std::vector<unsigned int> &A, const unsigned int &left,
               const unsigned int &right) {
  if (left + 1 < right) {
    unsigned int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(int argc, char const *argv[]) {
  std::string Param;
  std::istringstream Stream;
  unsigned int n = 0;

  getline(std::cin, Param);
  Stream.str(Param);
  Stream >> n;
  Stream.clear();

  std::vector<unsigned int> S(n);
  getline(std::cin, Param);
  Stream.str(Param);
  for (size_t i = 0; i < n; i++) {
    Stream >> S[i];
  }
  Stream.clear();

  mergeSort(S, 0, n);

  printVector(S);
  std::cout << Count << std::endl;
  return 0;
}