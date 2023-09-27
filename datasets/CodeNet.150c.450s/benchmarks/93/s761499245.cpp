#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#define _USE_MATH_DEFINES
#include <cmath>

#define rep(i, n)     for (int (i) = 0; (i) < (n); (i)++)
#define rep1(i, n)    for (int i = 1; i <= (int)(n); i++)

using namespace std;
typedef long long ll;

struct Card {
   char suit;
   int  num;
};

const int MAX = 100100;
const int INF = 2e9;
Card A[MAX], B[MAX];

int partition(int p, int q) {
   int i = p - 1;
   int r = A[q].num;

   for (int j = p; j < q; j++) {
      if (A[j].num <= r) {
         i++;
         swap(A[i], A[j]);
      }
   }
   swap(A[i + 1], A[q]);
   return(i + 1);
}

void quickSort(int p, int q) {
   if (p < q) {
      int ans = partition(p, q);
      quickSort(p, ans - 1);
      quickSort(ans + 1, q);
   }
}

void merge(int head, int mid, int tail) {
   int  n1 = mid - head;
   int  n2 = tail - mid;
   Card L[n1 + 1], R[n2 + 1];

   rep(i, n1) L[i] = B[head + i];
   rep(i, n2) R[i] = B[mid + i];
   L[n1].num = R[n2].num = INF;

   int l = 0, r = 0;
   for (int i = 0; i < tail - head; i++) {
      if (L[l].num <= R[r].num) {
         B[head + i] = L[l];
         l++;
      }
      else{
         B[head + i] = R[r];
         r++;
      }
   }
}

void mergeSort(int head, int tail) {
   int mid = (head + tail) / 2;

   if (head + 1 < tail) {
      mergeSort(head, mid);
      mergeSort(mid, tail);
      merge(head, mid, tail);
   }
}

int main() {
   int  n, cur_num;
   char cur_suit[10];
   bool or_stable = true;

   cin >> n;
   rep(i, n) {
      scanf("%s %d", cur_suit, &cur_num);
      A[i].num  = B[i].num = cur_num;
      A[i].suit = B[i].suit = cur_suit[0];
   }
   quickSort(0, n - 1);
   mergeSort(0, n);
   rep(i, n) {
      if (A[i].suit != B[i].suit) or_stable = false;
   }
   cout << (or_stable ? "Stable" : "Not stable") << endl;
   rep(i, n) {
      printf("%c %d\n", A[i].suit, A[i].num);
   }
   return(0);
}

