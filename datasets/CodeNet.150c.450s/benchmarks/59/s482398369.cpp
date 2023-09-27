#include<iostream>
using namespace std;

int main(){
  int n,i,j,v,A[1001];
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> A[i];
  }
  for(i = 1; i < n; i++){
    for(int k = 0; k < n; k++){
      if(k == n-1)cout << A[k];
      else cout << A[k] << " ";
    }
    cout << endl;
    v = A[i];
    j = i - 1;
    while(j >=0 && A[j] > v){
      A[j+1] = A[j];
      j--;
      A[j+1] = v;
	
    }
  }
 
    for(int k = 0; k < n; k++){
      if(k == n-1)cout << A[k];
      else cout << A[k] << " ";
    }
    cout << endl;
  return 0;
}