#include <iostream>
#include <vector>
#include <climits>

void merge(std::vector<int> *A, int left, int mid, int right, int *count) {
  int n1 = mid - left;
  int n2 = right - mid;
  
  std::vector<int> *L = new std::vector<int>(n1 + 1, 0);
  std::vector<int> *R = new std::vector<int>(n2 + 1, 0);

  for (int i = 0; i < n1; i++) {
    L->at(i) = A->at(left + i);
  }

  for (int i = 0; i < n2; i++) {
    R->at(i) = A->at(mid + i);
  }
  
  L->at(n1) = INT_MAX;
  R->at(n2) = INT_MAX;

  int i = 0;
  int j = 0;

  for (int k = left; k < right; k++) {
    if (L->at(i) <= R->at(j)) {
      A->at(k) = L->at(i);
      i++;
    } else {
      A->at(k) = R->at(j);
      j++;
    }

    (*count)++;
  }

  delete R;
  delete L;
}

void merge_sort(std::vector<int> *A, int left, int right, int *count) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    merge_sort(A, left, mid, count);
    merge_sort(A, mid, right, count);
    merge(A, left, mid, right, count);
  }
}

int main(void) {
  int n = 0;

  std::cin >> n;
  
  std::vector<int> *A = new std::vector<int>(n, 0);

  for (int i = 0; i < n; i++) {
    int v = 0;
    
    std::cin >> v;

    A->at(i) = v;
  }

  int count = 0;

  int left = 0;
  int right = A->size();
  int mid = (left + right) / 2;

  merge_sort(A, left, right, &count);

  for (int i = 0; i < n; i++) {
    if (i < (n -1)) {
      std::cout << A->at(i) << " ";
    } else {
      std::cout << A->at(i) << std::endl;
    }
  }

  std::cout << count << std::endl;
  
  return 0;
}