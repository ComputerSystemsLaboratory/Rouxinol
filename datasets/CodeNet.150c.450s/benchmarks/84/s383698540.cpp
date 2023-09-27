#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>

struct Value {
  int value;
  int index;
};

void merge(std::vector<struct Value *> *A, int left, int mid, int right, long *count) {
  int n1 = mid - left;
  int n2 = right - mid;
  
  std::vector<struct Value *> *L = new std::vector<struct Value *>(n1 + 1, NULL);
  std::vector<struct Value *> *R = new std::vector<struct Value *>(n2 + 1, NULL);

  for (int i = 0; i < n1; i++) {
    L->at(i) = A->at(left + i);
  }

  for (int i = 0; i < n2; i++) {
    R->at(i) = A->at(mid + i);
  }

  L->at(n1) = (struct Value *) std::malloc(sizeof(struct Value));
  R->at(n2) = (struct Value *) std::malloc(sizeof(struct Value));  
  
  L->at(n1)->value = INT_MAX;
  R->at(n2)->value = INT_MAX;

  int i = 0;
  int j = 0;

  for (int k = left; k < right; k++) {
    struct Value *l = L->at(i);
    struct Value *r = R->at(j);
    
    if (l->value <= r->value) {
      A->at(k) = l;
      i++;
    } else {
      (*count) += n1 - i;
	
      A->at(k) = r;
      j++;
    }
  }

  delete R;
  delete L;
}

void merge_sort(std::vector<struct Value *> *A, int left, int right, long *count) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
  
    merge_sort(A, left, mid, count);
    merge_sort(A, mid, right, count);
    merge(A, left, mid, right, count);
  }
}

int main(void) {
  std::ios_base::sync_with_stdio(false);
  
  int n = 0;

  std::cin >> n;
  
  std::vector<struct Value *> *A = new std::vector<struct Value *>(n, NULL);

  for (int i = 0; i < n; i++) {
    struct Value *v = (struct Value *) std::malloc(sizeof(struct Value));
    
    std::cin >> v->value;
    v->index = i;
    
    A->at(i) = v;
  }

  long count = 0;

  int left = 0;
  int right = A->size();
  int mid = (left + right) / 2;

  merge_sort(A, left, right, &count);

  std::cout << count << std::endl;
  
  return 0;
}