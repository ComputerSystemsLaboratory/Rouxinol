#include<iostream>
using namespace std;

void display(int A[], int N) {
  int i;
  for(i = 0; i < N; i++) {
    if(i > 0) cout<<" ";
    cout<<A[i];
  }
  cout<<endl;
}

void insert_sort(int A[], int N) {
  int i, j, tmp;
  for(i = 1; i < N; i++) {
    tmp = A[i];
    j = i;
    while(j > 0 && A[j-1] > tmp) {
      A[j] = A[j-1];
      j--;
    }
    A[j] = tmp;
    display(A, N);
  }
}


int main(){
  int N, A[100];

  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> A[i];
  }
  display(A, N);
  insert_sort(A, N);

  return 0;


}

