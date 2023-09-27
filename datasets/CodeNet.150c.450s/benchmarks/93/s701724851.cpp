#include <bits/stdc++.h>
using namespace std;
using Cards = vector<pair<string, int>>;
const int INF = INT_MAX;
void merge(Cards &cards, int left, int mid, int right) {
  int nl = mid - left, nr = right - mid;
  Cards L(nl + 1), R(nr + 1);
  for (size_t i = 0; i < nl; i++) {
    L.at(i) = cards.at(left + i);
  }
  L.at(nl) = make_pair('a', INF);

  for (size_t i = 0; i < nr; i++) {
    R.at(i) = cards.at(mid + i);
  }
  R.at(nr) = make_pair('a', INF);

  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].second <= R[j].second) {
      cards[k] = L[i++];
    } else {
      cards[k] = R[j++];
    }
  }
}
void mergeSort(Cards &cards, int left, int right) {
  if ((right - left) == 1) return;
  int mid = (left + right) / 2;
  mergeSort(cards, left, mid);
  mergeSort(cards, mid, right);
  merge(cards, left, mid, right);
}
int mypartition(Cards &cards, int p, int r) {
  int x = cards[r].second, i = p - 1;
  pair<string, int> tmp;
  for (int j = p; j < r; j++) {
    if (cards[j].second <= x) {
      i++;
      tmp = cards[j];
      cards[j] = cards[i];
      cards[i] = tmp;
    }
  }

  tmp = cards[++i];
  cards[i] = cards[r];
  cards[r] = tmp;

  return i;
}

void quickSort(Cards &cards, int p, int r) {
  if ((r - p) <= 0) return;
  int q = mypartition(cards, p, r);
  quickSort(cards, p, q - 1);
  quickSort(cards, q + 1, r);
}
int main() {
  int n;
  cin >> n;
  Cards qcards(n), mcards(n);
  for (size_t i = 0; i < n; i++) {
    cin >> qcards.at(i).first >> qcards.at(i).second;
    mcards.at(i) = qcards.at(i);
  }
  quickSort(qcards, 0, n - 1);
  mergeSort(mcards, 0, n);
  bool isStable = true;
  for (size_t i = 0; i < n; i++) {
    if (qcards[i] != mcards[i]) {
      isStable = false;
      break;
    }
  }

  if (isStable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  for (auto &&i : qcards) {
    cout << i.first << ' ' << i.second << endl;
  }
}
