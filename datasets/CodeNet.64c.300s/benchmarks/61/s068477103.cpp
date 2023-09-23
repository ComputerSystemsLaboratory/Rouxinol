#include <bits/stdc++.h>
using namespace std;
int main(){
int R, C; 
cin >> R >> C; 
int A[110][110] = {0}; 
for (int i = 0; i < R; ++i) {
  for (int j = 0; j < C; ++j){
   cin >> A[i][j]; 
  }
 }
for (int i = 0; i < R; ++i) {
  for (int j = 0; j < C; ++j){
   A[i][C] += A[i][j]; 
   A[R][j] += A[i][j]; 
   A[R][C] += A[i][j]; 
  }
 }
for (int i = 0; i <= R; ++i) {
  for (int j = 0; j <= C; ++j){
   if(j != C) cout << A[i][j] << " ";
   if(j == C) cout << A[i][j];  
  }
  cout << endl; 
 }
}
