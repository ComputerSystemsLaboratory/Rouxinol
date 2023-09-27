#include <iostream>
#include <cstdlib>

const int MAX_SIZE = 36;

struct Cell {
  char card;
  int order;
  int value;
};

void bubbleSort(struct Cell *list[MAX_SIZE], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j >= i + 1; j--) {
      if (list[j]->value < list[j - 1]->value) {
	struct Cell *tmp = list[j];
	list[j] = list[j - 1];
	list[j - 1] = tmp;
      }
    }
  }
}

void selectionSort(struct Cell *list[MAX_SIZE], int n) {
  for (int i = 0; i < n; i++) {
    int minj = i;
    
    for (int j = i; j < n; j++) {
      if (list[j]->value < list[minj]->value) {
	minj = j;
      }
    }

    struct Cell *tmp = list[i];
    list[i] = list[minj];
    list[minj] = tmp;
  }
}

bool isStable(struct Cell *list[MAX_SIZE], int n) {
  for (int i = 1; i < n; i++) {
    if ((list[i - 1]->value == list[i]->value) && (list[i - 1]->order > list[i]->order)) {
      return false;
    }
  }
 
  return true;
}

void print(struct Cell *list[MAX_SIZE], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << list[i]->card << list[i]->value;
    
    if (i < (n - 1)) {
      std::cout << " ";
    } else {
      std::cout << std::endl;
    }
  }

  if (isStable(list, n)) {
    std::cout << "Stable" << std::endl;
  } else {
    std::cout << "Not stable" << std::endl;
  }
}

int main() {
  int n = 0;

  std::cin >> n;

  struct Cell *B[MAX_SIZE];
  struct Cell *S[MAX_SIZE];

  int order = 0;

  for (int i = 0; i < n; i++) {
    B[i] = (struct Cell *) std::malloc(sizeof(struct Cell));
    S[i] = (struct Cell *) std::malloc(sizeof(struct Cell));    
    
    std::string card;

    std::cin >> card;
    
    B[i]->order = order;
    B[i]->card = card[0];
    B[i]->value = card[1] - '0';
    
    S[i]->order = B[i]->order;
    S[i]->card = B[i]->card;
    S[i]->value = B[i]->value;

    order++;
  }


  bubbleSort(B, n);
  selectionSort(S, n);

  print(B, n);
  print(S, n);
  
  return 0;
}