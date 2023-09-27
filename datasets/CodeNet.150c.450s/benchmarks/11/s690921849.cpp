#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N; 
int A[5][15] = {0};
for (int i = 0; i < N; i++){
char c; 
int m;
cin >> c >> m; 
if(c == 'S') A[1][m] = 1; 
if(c == 'H') A[2][m] = 1; 
if(c == 'C') A[3][m] = 1; 
if(c == 'D') A[4][m] = 1; 
}

for (int j = 1; j <= 13; j++){
if(A[1][j] == 0)
 cout << "S " << j << endl;  
}
for (int j = 1; j <= 13; j++){
if(A[2][j] == 0)
 cout << "H " << j << endl;  
}
for (int j = 1; j <= 13; j++){
if(A[3][j] == 0)
 cout << "C " << j << endl;  
}
for (int j = 1; j <= 13; j++){
if(A[4][j] == 0)
 cout << "D " << j << endl;  
}
}
