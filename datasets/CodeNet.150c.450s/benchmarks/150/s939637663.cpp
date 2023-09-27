#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 2000001

void Counting_Sort(vector<int> A,int B[],int k){
  vector<int> C(k,0);
  

  int len = (int)A.size();
  for(int j = 0 ; j < len ; j++){
    C[A[j]]++;
  }

  for(int i = 1 ; i <= k ; i++){
    C[i] += C[i-1];
  }
 
  for(int j = len-1 ; j >= 0 ; j--){
    B[C[A[j]]] = A[j];
    C[A[j]]--;
  }
}

int main(){
  int n;

  cin >> n;

  vector<int> A(n);
  int B[MAX];
  int k = 0;

  for(int i = 0 ; i < n ; i++){
    cin >> A[i];
    k = max(k,A[i]);
  }

  Counting_Sort(A,B,k);

  for(int i = 1 ; i <= (int)A.size() ; i++){
    if(i == 1){
      cout << B[i];
    }else{
      cout << " " << B[i];
    }
  }
  cout << endl;

  return 0;
}