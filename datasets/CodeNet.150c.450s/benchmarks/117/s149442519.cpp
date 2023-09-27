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

const int MAX = 500100;
const int INF = 2e9;
int cnt = 0, S[MAX];

void merge(int head, int mid, int tail) {
   int n1 = mid - head;
   int n2 = tail - mid;
   int L[n1 + 1], R[n2 + 1];

   rep(i, n1) L[i] = S[head + i];
   rep(i, n2) R[i] = S[mid + i];
   L[n1] = R[n2] = INF;

   int l = 0, r = 0;
   for (int i = 0; i < tail - head; i++) {
      if (L[l] <= R[r]) {
         S[head + i] = L[l];
         l++;
      }
      else{
         S[head + i] = R[r];
         r++;
      }
      cnt++;
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
   int n;

   cin >> n;
   rep(i, n) scanf("%d", &S[i]);
   mergeSort(0, n);
   rep(i, n) {
      if (i != 0)
         printf(" ");
      printf("%d", S[i]);
   }
   printf("\n%d\n", cnt);
   return 0;
}

