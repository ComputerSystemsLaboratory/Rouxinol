#include <iostream>
#include <vector>
#include <cstdlib>

const int MAX_N = 100000;

struct Card {
  int order;
  int value;
  char kind;
};

void swap(std::vector<struct Card *> *A, int i, int j) {
  struct Card *tmp = A->at(i);
  A->at(i) = A->at(j);
  A->at(j) = tmp;
}

int partition(std::vector<struct Card *> *A, int p, int r) {
  struct Card *x = A->at(r);
  int i = p - 1;

  for (int j = p; j <= r - 1; j++) {
    if (A->at(j)->value <= x->value) {
      i++;
      
      swap(A, i, j);
    }
  }

  swap(A, i + 1, r);

  return i + 1;
}

void quick_sort(std::vector<struct Card *> *A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    
    quick_sort(A, p, q - 1);
    quick_sort(A, q + 1, r);
  } 
}
  

int main(void) {
  std::ios_base::sync_with_stdio(false);

  int n = 0;

  std::cin >> n;

  std::vector<struct Card *> *A = new std::vector<struct Card *>();
  A->reserve(MAX_N);

  for (int i = 0; i < n; i++) {
    char c = 0;
    int v = 0;

    std::cin >> c;
    std::cin >> v;

    struct Card *card = (struct Card *) std::malloc(sizeof(struct Card));

    card->order = i;
    card->value = v;
    card->kind = c;
    
    A->push_back(card);
  }
  
  quick_sort(A, 0, A->size() - 1);

  bool prescendOrder = true;

  for (int i = 1; i < A->size(); i++) {
    if (A->at(i - 1)->value == A->at(i)->value) {
      if (A->at(i - 1)->order > A->at(i)->order) {
	prescendOrder = false;

	break;
      }
    }
  }  

  if (prescendOrder) {
    std::cout << "Stable" << std::endl;
  } else {
    std::cout << "Not stable" << std::endl;
  }

  for (int i = 0; i < A->size(); i++) {
    std::cout << A->at(i)->kind << " " << A->at(i)->value << std::endl;
  }

  return 0;
}