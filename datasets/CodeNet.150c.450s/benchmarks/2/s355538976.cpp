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

const int MAX = 100100;
int S[MAX];

int partition(int n) {
   int i = 0;
   int r = S[n];

   for (int j = 1; j < n; j++) {
      if (S[j] <= r) {
         i++;
         swap(S[i], S[j]);
      }
   }
   swap(S[i + 1], S[n]);
   return(i + 1);
}

int main() {
   int n;

   cin >> n;
   for (int i = 1; i <= n; i++) {
      scanf("%d", &S[i]);
   }
   int ans = partition(n);
   for (int i = 1; i <= n; i++) {
      if (i != 1) printf(" ");
      if (i == ans) printf("[%d]", S[i]);
      else printf("%d", S[i]);
   }
   printf("\n");
   return(0);
}

