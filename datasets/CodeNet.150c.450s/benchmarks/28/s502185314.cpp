#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#define rep(i, n)     for (int (i) = 0; (i) < (n); (i)++)
#define rep1(i, n)    for (int i = 1; i <= (int)(n); i++)

using namespace std;
typedef long long ll;

const int MAX = 100000;
int w[MAX];

int mv(int p, int k, int n) {
   int ans = 0, curw = 0, cnt = 0;

   rep(i, n) {
      curw += w[i];
      if (curw > p) {
         cnt++;
         if (cnt == k) return(ans);

         curw = w[i];
         if (curw > p) return(ans);

         ans++;
      }
      else
         ans++;
   }
   return(n);
}

int solve(int k, int n) {
   int head = 1, tail = n * 10000;
   int mid;

   while (head != tail) {
      mid = (head + tail) / 2;
      if (mv(mid, k, n) == n)
         tail = mid;
      else
         head = mid + 1;
   }
   return(head);
}

int main() {
   int n, k, sum = 0;

   cin >> n >> k;
   rep(i, n) {
      scanf("%d", &w[i]);
      sum += w[i];
   }
   cout << solve(k, n) << endl;
   return(0);
}

