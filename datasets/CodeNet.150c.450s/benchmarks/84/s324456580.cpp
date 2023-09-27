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

const int MAXN = 200100;
const int INF  = 2e9;

int A[MAXN];
ll  cnt = 0;

ll merge(int head, int mid, int tail) {
   int n1 = mid - head;
   int n2 = tail - mid;
   ll  ans = 0;
   int cur = n1;
   int L[n1 + 1], R[n2 + 1];

   rep(i, n1) L[i] = A[head + i];
   rep(i, n2) R[i] = A[mid + i];
   L[n1] = R[n2] = INF;
   int l = 0;
   int r = 0;
   for (int i = 0; i < tail - head; i++) {
      if (L[l] <= R[r]) {
         A[head + i] = L[l];
         l++;
         cur--;
      }
      else{
         A[head + i] = R[r];
         r++;
         ans += cur;
      }
   }
   return(ans);
}

void mergeSort(int head, int tail) {
   int mid = (head + tail) / 2;

   if (head + 1 < tail) {
      mergeSort(head, mid);
      mergeSort(mid, tail);
      cnt += merge(head, mid, tail);
   }
}

int main() {
   int n;

   cin >> n;
   rep(i, n) scanf("%d", &A[i]);
   mergeSort(0, n);
   cout << cnt << endl;
   return(0);
}

