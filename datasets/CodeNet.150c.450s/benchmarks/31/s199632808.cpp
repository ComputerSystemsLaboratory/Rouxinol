#include<iostream>
using namespace std;
int Max = 200000;

int main(){
  int A[Max], n, i;
  int maxv, minv;

  cin >> n;
  for(i = 0; i < n; i++) {
    cin >> A[i];
  }

  maxv = A[1] - A[0];
  minv = A[0];

  for(i = 1; i < n; i++) {
    maxv = (maxv > (A[i] - minv))?maxv:(A[i] - minv);
    minv = (minv < A[i])?minv:A[i];
  }

  cout<<maxv<<endl;

  return 0;

}

