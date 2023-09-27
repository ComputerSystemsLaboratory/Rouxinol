#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;   
for (int i = 0; i < N; i++){
int a, b, c; 
cin >> a >> b >> c; 
if(a > b) swap(a, b); 
if(b > c) swap(b, c);
if(a * a + b * b == c * c)
  cout << "YES" << endl; 
else
  cout << "NO" << endl; 
}
}
