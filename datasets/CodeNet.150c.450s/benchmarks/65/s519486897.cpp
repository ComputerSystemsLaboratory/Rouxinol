#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Card {
  char suite;
  int num;
};

vector<Card> selectionSort(vector<Card> A) {
  for (size_t i = 0; i < A.size() - 1; i++) {
    size_t minj = i;
    for (size_t k = i + 1; k < A.size(); k++) {
      if (A[k].num < A[minj].num) {
        minj = k;
      }
    }
    if (minj != i) {
      swap(A[minj], A[i]);
    }
  }

  return A;
}

vector<Card> bubbleSort(vector<Card> A) {
  bool flag = true;

  while (flag) {
    flag = false;
    for (size_t k = A.size() - 1; k > 0; --k) {
      if (A[k].num < A[k - 1].num) {
        swap(A[k], A[k - 1]);
        flag = true;
      }
    }
  }

  return A;
}

void printCards(vector<Card> v) {
  for (size_t i = 0; i < v.size(); i++) {
    if (i > 0) cout << " ";
    cout << v[i].suite << v[i].num;
  }
  cout << endl;
}

bool isStable(vector<Card> original, vector<Card> sorted) {
  for (size_t i = 0; i < sorted.size() - 1; i++) {
    for (size_t j = i + 1; j < sorted.size(); j++) {
      if (sorted[i].num != sorted[j].num) {
        break;
      }

      // Now we know sorted[i].num == sorted[j].num
      // Let's check the original positions of them

      size_t original_i, original_j;
      for (size_t k = 0; k < original.size(); k++) {
        if (sorted[i].suite == original[k].suite && sorted[i].num == original[k].num) {
          original_i = k;
          break;
        }
      }
      for (size_t k = 0; k < original.size(); k++) {
        if (sorted[j].suite == original[k].suite && sorted[j].num == original[k].num) {
          original_j = k;
          break;
        }
      }

      // Because i < j, if original_i > original_j, then it's not stable
      if (original_i > original_j) {
        return false;
      }
    }
  }
  return true;
}

void printStability(vector<Card> original, vector<Card> sorted) {
  if (isStable(original, sorted)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
}

int main(int argc, char** argv) {
  vector<Card> A;

  size_t N;
  cin >> N;

  for (size_t i = 0; i < N; i++) {
    Card c;
    cin >> c.suite >> c.num;
    A.push_back(c);
  }
  // printCards(A);

  vector<Card> C = bubbleSort(A);
  printCards(C);
  printStability(A, C);

  vector<Card> B = selectionSort(A);
  printCards(B);
  printStability(A, B);

  return 0;
}

