#include <iostream>
using namespace std;
static const int MAX = 36;

struct Card {
  char suit;
  char value;
};

void trace(struct Card data[], int n) {
  for (int i = 0; i < n; i++) {
    if (i != 0)
      cout << " ";
    cout << data[i].suit << data[i].value;
  }
  cout << endl;
}

int bubbleSort(struct Card A[], int len) {
  int count = 0;
  bool flag = 1;
  for (int i = 0; flag; i++) {
    flag = 0;
    for (int j = len - 1; j >= i + 1; j--) {
      if (A[j].value < A[j - 1].value) {
        swap(A[j], A[j - 1]);
        count++;
        flag = 1;
      }
    }
  }
  return count;
}

int selectionSort(struct Card A[], int len) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    int mini = i;
    for (int j = i; j < len; j++) {
      if (A[j].value < A[mini].value) {
        mini = j;
      }
    }
    if (i != mini) {
      swap(A[i], A[mini]);
      count++;
    }
  }
  return count;
}

int main() {
  struct Card data1[MAX + 1];
  struct Card data2[MAX + 1];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> data1[i].suit >> data1[i].value;
  for (int i = 0; i < n; i++)
    data2[i] = data1[i];

  bubbleSort(data1, n);
  selectionSort(data2, n);

  bool isStable = 1;
  for (int i = 0; i < n; i++) {
    if (data1[i].suit != data2[i].suit) {
      isStable = 0;
      break;
    }
  }

  trace(data1, n);
  cout << "Stable" << endl;
  trace(data2, n);
  cout << (isStable ? "Stable" : "Not stable") << endl;
}