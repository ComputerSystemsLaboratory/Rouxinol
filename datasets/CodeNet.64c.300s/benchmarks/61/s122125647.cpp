#include<iostream>
using namespace std;

int main(){
  int r,c,sum;
  cin >> r >>c;
  int* A = new int[c];
  int* FC = new int[c]();

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      cin >> A[j];
    }
    sum = 0;
    for(int j=0;j<c;j++){
      cout << A[j] << ' ';
      sum += A[j];
      FC[j] += A[j];
      if(j==c-1){
        cout << sum << endl;
      }
    }
  }
  sum = 0;
  for(int i=0;i<c;i++){
    cout << FC[i] << ' ';
    sum += FC[i];
  }
  cout << sum << endl;
}
