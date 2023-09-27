#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
  
const int MAX = 2000001;
const int VMAX = 10000;
int A[MAX], B[MAX];   
int C[VMAX+1];
  
int main(){
    ios::sync_with_stdio(false);
         
    int n, i, j;
    cin >> n;
    
    for(i=0; i <= VMAX; i++) C[i] = 0;
  
    for(i=0; i<n; i++){
      cin >> A[i+1];
      C[A[i+1]]++;
    }
  
    for(i=1; i<=VMAX; i++){
      C[i] = C[i] + C[i-1];
    }
    for(j=1; j<=n; j++){
      B[C[A[j]]] = A[j];
      C[A[j]]--;
    }
    for(i=1;i<=n;i++){
      if(i>1) cout << " ";
      cout << B[i];
    }
    cout << "\n";
  
    return 0;
}