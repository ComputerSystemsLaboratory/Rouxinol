/**
 * Quick Sort
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_C&lang=ja
 */

#include <bits/stdc++.h>
using namespace std;

/*
quicksort(A, p, r)
  if p < r
    q = partition(A, p, r)
    quickSort(A, p, q-1)
    quickSort(A, q+1, r)
*/

struct Card {
  char suit; // D,H..
  int value; // 1..13
};

int partition(vector<Card> &A, int p, int r) {
  int x = A.at(r).value;
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A.at(j).value <= x) {
      i = i+1;
      // cout << "swap" << i << ' ' << j;
      swap(A.at(i), A.at(j));
    }
  }

  swap(A.at(i + 1), A.at(r));
  return i + 1;
}

void quickSort(vector<Card> &A, int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q-1);
    quickSort(A, q+1, r);
  }
}

/**
 * ソートが安定的かどうかを判定する
 */
string isStable(vector<Card>A, vector<Card>S, int N) {
  // int count = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < S.size(); j++) {
      // 一致する要素が登場したら、一致した要素は安定的であるとして削除する
      if (S.at(j).suit == A.at(i).suit && S.at(j).value == A.at(i).value) {
        S.erase(S.begin() + j);
        break;
      }
      // 一致する要素が登場する前に、数字が同じ他のカードが登場してしまった
      if (A.at(i).value == S.at(j).value) {
        return "Not stable";
      }
    }
  }

  return "Stable";
}

void printCard(vector<Card> &A) {
    for (int i = 0; i < A.size(); i++) {
      cout << A.at(i).suit << ' ' << A.at(i).value << endl;
  }
}

int main() {
  // 1行目にカードの枚数 n が与えられます。
  int n;
  cin >> n;

  // 2行目以降で n 枚のカードが与えられます。各カードは絵柄を表す１つの文字と数（整数）のペアで１行に与えられます。絵柄と数は１つの空白で区切られています。 
  vector<Card> A(n);
  for (int i = 0; i < n; i++) {
    struct Card c;
    cin >> c.suit >> c.value;
    A.at(i) = c;
  }

  // ソート前の配列をAとし、ソート対象の配列をSとする
  vector<Card> S = A;
  quickSort(S, 0, n - 1);

  // 結果の出力
  cout << isStable(A, S, n) << endl;
  printCard(S);
}

