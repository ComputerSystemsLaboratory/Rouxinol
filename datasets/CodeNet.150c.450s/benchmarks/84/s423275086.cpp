/**
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
 */

#include <iostream>
#include <sstream>
#include <vector>
#include <limits>

unsigned long long bubbleSort(std::vector<unsigned int>& A) {
  unsigned int N = A.size();
  unsigned long long Count {0};
  bool isSwapped = false;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = N - 1; j >= i + 1; j--) {
      if (A[j] < A[j - 1]) {
        std::swap(A[j], A[j - 1]);
        isSwapped = true;
        Count++;
      }
    }
    if (isSwapped == false) {
      break;
    }
    isSwapped = false;
  }
  return Count;
}

unsigned long long merge(std::vector<unsigned int> &A, const unsigned int &left,
           const unsigned int &mid, const unsigned int &right) {
  unsigned int n1 = mid - left;  // 5 - 0
  unsigned int n2 = right - mid; // 9 - 6
  // L[0...n1], R[0...n2] ?????????
  std::vector<unsigned int> L(n1 + 1); // 0 1 2 3 4 MAX
  std::vector<unsigned int> R(n2 + 1); // 5 6 7 8 9 MAX
  unsigned long long Count {0};

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
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
      Count += n1 - i;  // mid + j - k - 1
    }
  }
  return Count;
}

unsigned long long mergeSort(std::vector<unsigned int> &A, const unsigned int &left,
               const unsigned int &right) {
  if (left + 1 < right) {
    unsigned int mid = (left + right) / 2;
    unsigned long long Count = mergeSort(A, left, mid);
    Count += mergeSort(A, mid, right);
    Count += merge(A, left, mid, right);
    return Count;
  } else {
    return 0;
  }
}

unsigned long long mergeSort(std::vector<unsigned int> &A) {
  unsigned long long Count = mergeSort(A, 0, A.size());
  return Count;
}

int main(int argc, char const *argv[]) {
  std::string Param;
  std::istringstream Stream;
  unsigned int n;
  std::vector<unsigned int> A;

  getline(std::cin, Param);
  Stream.str(Param);
  Stream >> n;
  Stream.clear();

  getline(std::cin, Param);
  Stream.str(Param);
  for (size_t i = 0; i < n; i++) {
    unsigned int Ai = 0;
    Stream >> Ai;
    A.push_back(Ai);
  }
  Stream.clear();

  unsigned long long Count {0};
  // Count = bubbleSort(A);
  Count = mergeSort(A);

  std::cout << Count << std::endl;
  return 0;
}