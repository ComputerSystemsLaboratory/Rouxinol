#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){

  int n,m,l;

  cin >> n>>m>>l;

  int a[m][n];
  int b[l][m];
  long c[l][n];
  memset(a,0,(n*m)*sizeof(int));
  memset(b,0,(m*l)*sizeof(int));
  memset(c,0,(l*n)*sizeof(long));


  for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
      cin >> a[i][j];
    }
  }
  for(int j=0;j<m;j++){
    for(int i=0;i<l;i++){
      cin >> b[i][j];
    }
  }

  for(int j=0;j<n;j++){
    for(int i=0;i<l;i++){
      long sum = 0;
      for(int k=0;k<m;k++){
        sum += a[k][j] * b[i][k];
      }
      c[i][j] = sum;
    }
  }

  for(int j=0;j<n;j++){
    for(int i=0;i<l;i++){
      cout << c[i][j] ;
      if(i == l-1) cout << endl;
      else cout << " ";
    }
  }



  
}


