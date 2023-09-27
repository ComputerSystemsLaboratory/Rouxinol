#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i, n) for(int i = 0; i < n; ++i)
#define INF (2e9)

struct Card{
  char suit;
  int number;
  // bool operator<(const Card& another) const {
  //   return number < another.number;
  // }
};

// bool asc(const Card& left, const Card& right) {
//   return left.number < right.number;
// }

int n;

int partition(vector<Card> &A, int p, int r) {
  int x = A[r].number;
  int i = p-1;
  for(int j = p; j < r; ++j) {
    if(A[j].number <= x) {
      i++;
      Card tmp = A[i]; A[i] = A[j]; A[j] = tmp;
    }
  }
  Card tmp = A[i+1]; A[i+1] = A[r]; A[r] = tmp;
  return i+1;
}

void quicksort(vector<Card> &A, int p, int r) {
  if(p < r) {
    int q = partition(A, p, r);
    quicksort(A, p, q-1);
    quicksort(A, q+1, r);
  }
}

int main() {
  cin >> n;
  vector<Card> cards(n), cards_copy(n);
  REP(i, n) cin >> cards[i].suit >> cards[i].number;
  REP(i, n) cards_copy[i] = cards[i];

  quicksort(cards, 0, n-1);
  stable_sort(cards_copy.begin(), cards_copy.end(), [](const Card &a, const Card &b){return a.number < b.number;});

  int isStable = 1;
  REP(i, n) {
    if(cards[i].suit != cards_copy[i].suit) {
      isStable = 0;
      break;
    }
  }
  cout << (isStable ? "Stable" : "Not stable") << endl;
  REP(i, n) cout << cards[i].suit << " " << cards[i].number << endl;  

  return 0;
}
