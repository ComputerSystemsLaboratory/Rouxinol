#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A[N];
  for(int k=0;k<N;k++){
    cin >> A[k];
  }

  int count=0;
  int flag=1;
  while(flag){
    flag = 0;
    for(int j=N-1;j>0;j--){
      if(A[j]<A[j-1]){
        int tmp = A[j];
        A[j] = A[j-1];
        A[j-1] = tmp;
        flag = 1;
        count++;
      }
    }
  }

  for(int k=0;k<N-1;k++){
    cout << A[k] << " ";
  }
  cout << A[N-1] << endl;
  cout << count << endl;
  
  return 0;
}