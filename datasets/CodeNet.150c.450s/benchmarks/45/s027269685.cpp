#include<iostream>
#include<cmath>
using namespace std;
long long x[30],y[30],n,m,sum=1,mod=1000000007;
int main() {cin >> n >> m; for (int i = 0; i < 30; i++) { x[i] = (m / (int)pow(2, i)) % 2; } y[0] = n;
for (int i = 1; i < 30; i++) { y[i] = (y[i - 1] * y[i - 1]) % mod; }
for (int i = 0; i < 30; i++) { if (x[i] == 1) { sum *= y[i]; sum %= mod; } }
cout << sum << endl;}