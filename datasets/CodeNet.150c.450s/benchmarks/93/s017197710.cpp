#include <cstdio>
using namespace std;

struct Card {
  char suit;
  int num;
};

void swap(Card *a, Card *b) {
  Card tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int partition(Card A[], int p, int r) {
  int x = A[r].num;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j].num <= x) {
      i = i + 1;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[i + 1], &A[r]);
  return i + 1;
}

void quickSort(Card A[], int p, int r) {
  int q;
  if (p < r) {
    q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
  }
}

void merge(Card A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  Card L[n1 + 1], R[n2 + 1];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1].num = R[n2].num = 20000000;
  int i = 0;
  int j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].num <= R[j].num) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
    }
  }
}

void mergeSort(Card A[], int left, int right) {
  int mid;
  if (left + 1 < right) {
    mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n;
  char s[10];
  Card card[100000], another[100000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s %d", s, &card[i].num);
    card[i].suit = s[0];
    another[i] = card[i];
  }
  quickSort(card, 0, n - 1);
  mergeSort(another, 0, n);
  bool flag = false;
  for (int i = 0; i < n; i++) {
    if (card[i].suit != another[i].suit) {
      flag = true;
      break;
    }
  }
  if (flag) {
    printf("Not stable\n");
  } else {
    printf("Stable\n");
  }
  for (int i = 0; i < n; i++) {
    printf("%c %d\n", card[i].suit, card[i].num);
  }
}
