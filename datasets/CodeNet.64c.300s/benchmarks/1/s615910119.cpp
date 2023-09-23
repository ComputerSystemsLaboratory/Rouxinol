#include<iostream>
#include<algorithm>

using namespace std;

int partition(int *A, int p, int r){
  int x = A[r];
  int i = p - 1;
    for(int j = p;j < r;j++){
      if(A[j] <= x){
        i++;
        swap(A[i], A[j]);
      }
    }
    swap(A[i + 1], A[r]);
  return i + 1;
}

int main(){

  int n, a[100000], q;

  cin >> n;
  for(int i = 0;i < n;i++) cin >> a[i];

  q = partition(a, 0, n - 1);

  for(int i = 0;i < n;i++){
    cout << (i?" ":"");
    if(i == q) cout << '[' << a[i] << ']';
    else cout << a[i];
  }
  cout << endl;

  return 0;
}

