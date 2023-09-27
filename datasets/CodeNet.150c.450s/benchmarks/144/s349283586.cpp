#include<iostream>
using namespace std;

int main(){
   int n,m,l;
   cin >> n >> m >> l;
   long long matrixA[100][100];
   int matrixB[100][100];
   long long matrixAB[100];
   long long matrixC[100][100];
   
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           matrixA[i][j] = 0;
       }
   }
   
   for (int i = 0; i < m; i++) {
       for (int j = 0; j < l; j++) {
           matrixB[i][j] = 0;
       }
   }
   
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < l; j++) {
           matrixC[i][j] = 0;
       }
   }
   
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           cin >> matrixA[i][j]; 
            
       }
   }
    for (int i = 0; i < m; i++) {
       for (int j = 0; j < l; j++) {
           cin >> matrixB[i][j];
       }
   }
   
   
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           for (int k = 0; k < l; k++) {
            
             matrixC[i][k] += matrixA[i][j] * matrixB[j][k];     
           }
           
       }
   }
   
   for (int i = 0; i < n; i++) {
       for (int k = 0; k < l; k++) {
           if (k) cout << " ";
           cout << matrixC[i][k];
       }
       cout << endl;
   }
   
    return 0;
}