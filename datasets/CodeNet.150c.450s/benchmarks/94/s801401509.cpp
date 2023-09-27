#include <iostream>

using namespace std;

int BubbleSort(int A[], int N){
  int cnt=0;
  bool flag = true;
  
  while(flag){
    flag = false;
    for(int i = N-1; i > 0; i--){
      if(A[i] < A[i-1]){
	int tmp = A[i];
	A[i] = A[i-1];
	A[i-1] = tmp;
	cnt++;
	flag = true;
      }
    }
  }
  
  return cnt;
}

int main(){
  int A[100], N, cnt;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }

  cnt = BubbleSort(A, N);

  cout << A[0];
  for(int i = 1; i < N; i++){
    cout << " " << A[i];
  }
  cout << endl << cnt << endl;
  
  return 0;
}

