#include <iostream>
#include <vector>

const int MAX_N = 100000;

void swap(std::vector<int> *A, int i, int j) {
  int tmp = A->at(i);
  A->at(i) = A->at(j);
  A->at(j) = tmp;
}
	

int partition(std::vector<int> *A, int p, int r) {
  int x = A->at(r);
  int i = p - 1;

  for (int j = p; j <= r - 1; j++) {
    if (A->at(j) <= x) {
      i++;
      
      swap(A, i, j);
    }
  }

  swap(A, i + 1, r);

  return i + 1;
}
  

int main(void) {
  std::ios_base::sync_with_stdio(false);

  int n = 0;

  std::cin >> n;

  std::vector<int> *A = new std::vector<int>();
  A->reserve(MAX_N);

  for (int i = 0; i < n; i++) {
    int a = 0;

    std::cin >> a;
    
    A->push_back(a);
  }

  int index = partition(A, 0, A->size() - 1);

  for (int i = 0; i < A->size(); i++) {
    if (i == index) {
      std::cout << "[";
    }
    
    std::cout << A->at(i);

    if (i == index) {
      std::cout << "]";
    }
    
    if (i < (A->size() - 1)) {
      std::cout << " ";
    } else {
      std::cout <<  std::endl;
    }
  }

  return 0;
}