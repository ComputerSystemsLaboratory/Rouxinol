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

const int MAXN = 2000100;
const int MAXK = 10100;

int A[MAXN], B[MAXN], C[MAXK];

void countingSort(int n) {
   rep(i, MAXK) C[i] = 0;
   rep1(i, n) C[A[i]]++;
   for (int i = 1; i < MAXK; i++) {
      C[i] += C[i - 1];
   }
   for (int i = n; i > 0; i--) {
      B[C[A[i]]] = A[i];
      C[A[i]]--;
   }
}

int main() {
   int n;

   cin >> n;
   for (int i = 1; i <= n; i++) {
      scanf("%d", &A[i]);
   }
   countingSort(n);
   for (int i = 1; i <= n; i++) {
      if (i != 1) printf(" ");
      printf("%d", B[i]);
   }
   printf("\n");
   return(0);
}

