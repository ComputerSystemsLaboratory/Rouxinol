#include <bits/stdc++.h>
using namespace std;
int main() {
for (int k = 0; k < 100000; k++){
int N, X; 
cin >> N >> X;
if(N == 0 && X == 0) break; 
int count = 0; 
for (int i = 1; i < N-1; i++){
 for (int j = i+1; j < N; j++){
if(X - i - j <= N && X - i - j > j) count ++; 
}
}
cout << count << endl; 
}
}
