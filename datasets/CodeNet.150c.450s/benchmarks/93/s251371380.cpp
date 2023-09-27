#include<cstdio>
#include<utility>

struct Card {
  char suit;
  int value, order;
};

int partition(Card src[], int p, int r) {
  Card x = src[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (src[j].value <= x.value) {
      i++;
      std::swap(src[i], src[j]);
    }
  }

  std::swap(src[i + 1], src[r]);

  return i + 1;
}

void quick_sort(Card src[], int p, int r) {
  if (p < r) {
    int q = partition(src, p, r);
    quick_sort(src, p, q - 1);
    quick_sort(src, q + 1, r);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  Card cards[n];
  for (int i = 0; i < n; i++) {
    scanf(" %c %d", &cards[i].suit, &cards[i].value);
    cards[i].order = i;
  }

  quick_sort(cards, 0, n - 1);

  bool stable = true;
  for (int i = 1; i < n; i++) {
    Card a = cards[i];
    Card b = cards[i - 1];
    if (a.value == b.value && a.order < b.order) {
      stable = false;
    }
  }

  if (stable) printf("Stable\n");
  else printf("Not stable\n");

  for (int i = 0; i < n; i++) printf("%c %d\n", cards[i].suit, cards[i].value);

  return 0;
}

