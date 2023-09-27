#include <algorithm>
#include <iostream>
#include <vector>

typedef struct {
  char mark;
  int num;
} Card;

void merge(std::vector<Card>* A, int left, int mid, int right) {
  std::vector<Card> L(A->begin() + left, A->begin() + mid);
  std::vector<Card> R(A->begin() + mid, A->begin() + right);
  L.push_back({'Z', std::numeric_limits<int>::max()});
  R.push_back({'Z', std::numeric_limits<int>::max()});
  int i = 0, j = 0;
  for (int k = left; k < right; ++k) {
    if (L[i].num <= R[j].num) {
      (*A)[k] = L[i];
      i = i + 1;
    } else {
      (*A)[k] = R[j];
      j = j + 1;
    }
  }
}

void mergeSort(std::vector<Card>* A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}


int partition(std::vector<Card>* A, int p, int r) {
  int x = (*A)[r].num;
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if ((*A)[j].num <= x) {
      i = i + 1;
      std::swap((*A)[i], (*A)[j]);
    }
  }
  std::swap((*A)[i + 1], (*A)[r]);
  return i + 1;
}

void quickSort(std::vector<Card>* A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

int main() {
  int n;
  std::cin >> n;
  std::vector<Card> cards;
  for (int i = 0; i < n; ++i) {
    Card c;
    std::cin >> c.mark >> c.num;
    cards.push_back(c);
  }
  std::vector<Card> merge_sort(cards.begin(), cards.end());
  mergeSort(&merge_sort, 0, n);
  quickSort(&cards, 0, n-1);
  bool flag = true;
  for (int i = 0; i < n; ++i) {
    if (cards[i].mark != merge_sort[i].mark ||
        cards[i].num != merge_sort[i].num) {
      flag = false;
      break;
    }
  }
  std::cout << (flag ? "Stable" : "Not stable") << std::endl;
  std::for_each(cards.begin(), cards.end(), [](Card c) {
      std::cout << c.mark << " " << c.num << std::endl;
    });
  return 0;
}