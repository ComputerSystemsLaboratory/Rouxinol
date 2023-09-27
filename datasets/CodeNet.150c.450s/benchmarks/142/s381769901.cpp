#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int n, k, a[200005];
int main() {
   cin >> n >> k;
   for (int i=0; i<n; i++) cin >> a[i];
   
   for (int i=0; i<n-k; i++) {
       if (a[i+k]>a[i]) cout << "Yes\n";
       else cout << "No\n";
   }
}