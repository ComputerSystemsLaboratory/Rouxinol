#include<iostream>

using namespace std;

// 入力
int A[100];
int N;

// insertion sort
int key,j;

void disp(){
  for(int i=0;i<N;i++)
    if(i==0) cout << A[i];
    else cout << " " << A[i];
  cout << endl;
}
int main(){
  cin >> N;
  for(int i=0;i<N;i++)cin >> A[i];
  disp();
  for(int i=1;i<N;i++){
    key = A[i];
    j = i-1;
    while(j >=0 && A[j] > key){
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;
    disp();
  }
}