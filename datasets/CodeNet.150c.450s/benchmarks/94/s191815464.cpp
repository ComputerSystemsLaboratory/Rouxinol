#include<iostream>

using namespace std;

int bubble_sort(int A[], int N){
  int num = 0, i = 0, j;
  bool flag = true;
  while(flag) {
    flag = false;
    for(j = N-1; j > i; j--) {
      if(A[j] < A[j-1]) {
        swap(A[j], A[j-1]);
        flag = true;
        num++;
      }
    }
    i++;
  }

  return num;
}

int main(){
  int A[100], N, num, i;
  cin >> N;
  for(i = 0; i < N; i++){
    cin >> A[i];
  }

  num = bubble_sort(A, N);

  for(i = 0; i < N; i++) {
    if(i) cout<<" ";
    cout<<A[i];
  }
  cout<<endl;
  cout<< num<< endl;

  return 0;
}

