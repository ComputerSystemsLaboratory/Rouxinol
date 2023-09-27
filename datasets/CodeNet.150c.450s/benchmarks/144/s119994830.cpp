#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
int n,m,l;
cin >> n >> m >> l;
int A[n][m] ;
int B[m][l] ;
long long C[n][l] ;

for(int i = 0; i<n; i++){
     for(int j = 0; j<l; j++){
          C[i][j] = 0;
     }
}

for(int i = 0; i<n; i++){
     for(int j = 0; j<m; j++){
               cin >> A[i][j];
     }
}
     for(int j = 0; j<m; j++){
          for(int k = 0; k<l; k++){
               cin >> B[j][k];
          }
     }
for(int i = 0; i<n; i++){
     for(int j = 0; j<l; j++){
          for(int k = 0; k<m; k++){
               C[i][j] += A[i][k] * B[k][j];
          }
     }
}
for(int i = 0; i<n; i++){
     for(int j = 0; j<l; j++){
          if(j == l-1){cout << C[i][j];
          }else{
               cout << C[i][j] << " ";
          }
     }cout << endl;
}
return 0;
}
