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

const int MAXH = 500100;

void maxHeap(int i, int H, int *A) {
   int l, r, largest;

   l = 2 * i;
   r = 2 * i + 1;

   if (l <= H && A[l] > A[i]) largest = l;
   else largest = i;
   if (r <= H && A[r] > A[largest]) largest = r;

   if (largest != i) {
      swap(A[i], A[largest]);
      maxHeap(largest, H, A);
   }
}

int main() {
   int H, A[MAXH];

   cin >> H;
   for (int i = 1; i <= H; i++) {
      scanf("%d", &A[i]);
   }
   for (int i = H / 2; i >= 1; i--) {
      maxHeap(i, H, A);
   }
   for (int i = 1; i <= H; i++) {
      cout << " " << A[i];
   }
   cout << endl;

   return(0);
}

