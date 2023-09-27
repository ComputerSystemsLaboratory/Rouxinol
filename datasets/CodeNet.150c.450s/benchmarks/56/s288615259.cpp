#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n; 
long long int m = 1234567;
long long int M = -1234567; 
long long int S = 0; 
cin >> n;  
for (int i = 0; i < n; i++){
long long int a; 
cin >> a; 
m = min(m, a); 
M = max(M, a); 
S += a; 
}
cout << m << " " << M << " " << S << endl; 
}
