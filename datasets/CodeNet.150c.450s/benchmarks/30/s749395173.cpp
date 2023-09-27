#include <iostream>

using namespace std;

int SelectionSort(int A[], int N){
  int minj, tmp, cnt=0;

  for(int i = 0; i < N-1; i++){
    minj = i;
    for(int j = i; j < N; j++){
      if(A[j] < A[minj]){
	minj = j;
      }
    }
    tmp = A[i];
    A[i] = A[minj];
    A[minj] = tmp;
    if(i != minj) cnt++;
  }

  return cnt;
}

int main(){
  int A[100], N, cnt;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  cnt = SelectionSort(A, N);

  cout << A[0];
  for(int i = 1; i < N; i++){
    cout << " " << A[i];
  }
  cout << endl << cnt << endl;
  
  return 0;
}

