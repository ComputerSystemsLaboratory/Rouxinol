#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int A[1000];
  int count = 0;
  int i, v, j;

  cin >> N;

  for(int i = 0 ; i < N ; i++){
    cin >> A[i];
  }

  for(count = 0 ; count < N ; count++){
    if(count!=N-1){
      cout << A[count] << " ";
    }else{
      cout << A[count];
    }
  }
  cout << endl;

  for(i = 1 ; i < N ; i++){
    v = A[i];
    j = i - 1;
    while(1){
      if(j >= 0 && A[j] > v){
	A[j+1] = A[j];
	j--;
	A[j+1] = v;
      }else{
	break;
      }
    }
   
    for(count = 0 ; count < N ; count++){
      if(count!=N-1){
	cout << A[count] << " ";
      }else{
	cout << A[count];
      }
    }
      cout << endl;
  }

  return 0;
}