#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){

  int n,m;
  cin >> n >> m;

  int a[n*m] ;
  int b[m] ;

  memset(a,0,n*m*sizeof(int));
  memset(b,0,m*sizeof(int));

  for(int i=0;i<n*m;i++){
    cin >> a[i];
  }
  for(int i=0;i<m;i++){
    cin >> b[i];
  }

  for(int j=0;j<n;j++){

    int sum=0;
    for(int i=0;i<m;i++){
      sum += a[i+j*m] * b[i];
    }
    cout << sum << endl;
  }

}

