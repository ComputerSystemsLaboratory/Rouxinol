#include <iostream>
using namespace std;

void MySwap(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}
  

int partition(int *A, int p, int r){
  int x = A[r];
  int i = p - 1;
  for(int j = p; j < r; j++){
    if(A[j] <= x){
      MySwap(A[++i], A[j]);
    }
  }
  MySwap(A[++i], A[r]);
  return i;
}

int main(){
  int A[100000], n, place;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> A[i];
  place = partition(A, 0, n-1);
  for(int i = 0; i < n; i++)
    cout << (i==place?"[":"") << A[i] << (i==place?"]":"") << (i==n-1?'\n':' ');
  return 0;
}
