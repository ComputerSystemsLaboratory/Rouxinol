#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N];
  for(int k=0;k<N;k++){
    cin >> A[k];
  }

  int count = 0;
  for(int i=0;i<N;i++){
    int minj = i;
    for(int j=i;j<N;j++){
      if(A[j] < A[minj]) minj = j;
    }
    if(minj != i){
      int temp;
      temp = A[i];
      A[i] = A[minj];
      A[minj] = temp;
      count++;
    }
  }

  for(int l=0;l<N-1;l++){
    cout << A[l] << " ";
  }
  cout << A[N-1] << endl;
  
  cout << count << endl;
  
  return 0;
}