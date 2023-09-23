#include<iostream>

using namespace std;

int main(){
  int  N[100];
  int n,i;

  cin >> n;
  for(i=0; i<n; i++){
    cin >> N[i];
  }
  for(; i>1; i--){
    cout << N[i-1] << " ";
  }
  cout << N[i-1] <<endl;
}