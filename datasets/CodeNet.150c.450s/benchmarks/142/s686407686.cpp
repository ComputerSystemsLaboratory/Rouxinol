#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 1e6+5;

int main() {
   int n, k;
   cin >> n >> k;
   vector <int> a(n);
   for(int i=0; i<n; i++) scanf("%d", &a[i]);
   for(int i=k; i<n; i++) {
      if(a[i] > a[i-k]) puts("Yes");
      else puts("No");
   }
}
