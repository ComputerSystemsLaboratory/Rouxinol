#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N; 
int a[5][15] = {0}; 
int b[5][15] = {0}; 
int c[5][15] = {0}; 
int d[5][15] = {0}; 
for (int i = 0; i < N; i++){
int B, F, R, V; 
cin >> B >> F >> R >> V; 
if(B == 1) a[F][R] += V; 
if(B == 2) b[F][R] += V;
if(B == 3) c[F][R] += V;
if(B == 4) d[F][R] += V;
}

for (int i = 1; i <= 3; i++){
  for (int j = 1; j <= 10; j++){
 cout << " " << a[i][j];
}
 cout << endl; 
} 
 cout << "####################" << endl; 

for (int i = 1; i <= 3; i++){
  for (int j = 1; j <= 10; j++){
 cout << " " << b[i][j];
}
 cout << endl; 
} 
 cout << "####################" << endl; 

for (int i = 1; i <= 3; i++){
  for (int j = 1; j <= 10; j++){
 cout << " " << c[i][j];
}
 cout << endl; 
} 
 cout << "####################" << endl; 

for (int i = 1; i <= 3; i++){
  for (int j = 1; j <= 10; j++){
 cout << " " << d[i][j];
}
 cout << endl; 
} 
}

