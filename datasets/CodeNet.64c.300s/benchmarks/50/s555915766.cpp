#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;


int BSort(int A[], int N) {
  int i, j, cnt;
  bool flag;
  cnt =0;
  flag = 1;
  for(i=0; flag; i++){
      flag = 0;
      for(j = N-1; j > i; j--){
        if(A[j] < A[j-1]){
          swap(A[j], A[j-1]);
          flag = 1;
          cnt++;
        }
      }
    }

    return cnt;
  }

int main(){
  int cnt, N, A[100];
  
  cin >> N;
  for(int i=0; i<N; i++) {cin >> A[i];}

  cnt = BSort(A, N);
  
  for(int i = 0; i < N; i++){
    cout << A[i];
    if(i != N-1){
      cout << " "; }
    }
      cout << endl;
    cout << cnt << endl;
  }