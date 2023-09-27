#include<iostream>
using namespace std;

int main(){
  int i, A[100];

  cin >> i;
  for (int j=0; j<i; j++)
    cin >> A[j];

  int j;
  for (j=0; j<i-1; j++)
    cout << A[j] << ' ' ;
  cout << A[j] << endl;

  for (int j=1; j<i; j++){
    int key = A[j];
    for (int k=0; k<j; k++)
      if (A[k] > A[j])
        swap(A[k], A[j]);
    int k;
    for (k=0; k<i-1; k++)
      cout << A[k] << ' ' ;
    cout << A[k] << endl;
  }

  return 0;
}