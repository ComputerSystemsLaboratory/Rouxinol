#include <bits/stdc++.h>
using namespace std;

void solve(int n){
for (int i = 2; i*i <= n; i++){
if (n % i == 0) {
cout << i << " "; solve(n / i); return;
}
}
cout<<n<<endl;
}

int main() {
int n; cin >> n; cout << n << ": "; solve(n);
}
