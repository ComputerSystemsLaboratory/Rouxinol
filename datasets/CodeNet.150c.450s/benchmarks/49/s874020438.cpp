#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
while(cin >> n) {
if(n == 0) break;
vector<int> a(n);
for(int i=0; i<n; i++) {
cin >> a[i];
}

sort(a.begin(), a.end());

int sum = 0;
for(int i=0; i<n; i++) {
if(i!=0 && i!=n-1) sum += a[i];
}

cout << sum / (n-2) << endl;
}
return 0;
}