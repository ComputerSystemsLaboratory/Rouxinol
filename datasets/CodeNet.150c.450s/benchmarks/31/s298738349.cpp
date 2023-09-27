#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 200000

int main(){

  int n; cin >> n;
  int A[MAX];

  for(int i=0;i<n;i++){
    cin >> A[i];
  }

  int maxv = A[1] - A[0];
  int minv = A[0];
  
  for(int j=1;j<n;j++){
      maxv = max(maxv,A[j] - minv);
      minv = min(minv, A[j]);
    }

  cout << maxv << endl;
  
  return 0;
}

