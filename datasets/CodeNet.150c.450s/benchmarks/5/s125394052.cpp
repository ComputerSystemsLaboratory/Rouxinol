#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
  int n, m, i=0, j=0;
  int a[1000], b[1000];

  cin >>n;
  while (i<n) {
    cin >> a[i];
    i++;
  }

  m = n-1;
  while(j<n-1){
    cout <<a[m] << " ";
    j++;
    m = m-1;
  }
  cout <<a[0] <<endl;
}