#include<iostream>
using namespace std;

int A[51];

void func(int n){
  if(n==50) return;
  A[n]=A[n-1]+A[n-2];
  func(n+1);
}

int main(){
  int n;
  cin >> n;
  A[0]=1; A[1]=1;
  func(2);

  cout << A[n] << endl;
}