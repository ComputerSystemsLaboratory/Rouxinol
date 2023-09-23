#include<iostream>

using namespace std;

int partition(int* A,int p, int r) {
  int x = A[r];
  int i = p - 1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i + 1;
}

int main() {
  int N;
  cin >> N;

  int A[N];
  for (int i = 0; i < N; i++) {
    cin>>A[i];
  }

  int q = partition(A, 0, N - 1);
  for(int i=0; i < N; i++){
    if (i) {
      cout << " ";
    }
    if (i == q) {
      cout<<"[";
    }
    cout << A[i];
    if (i == q) {
      cout<<"]";
    }
  }
  cout << endl;

  return 0;
}
