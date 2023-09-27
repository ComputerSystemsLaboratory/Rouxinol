#include <iostream>
using namespace std;

bool judge(int i,int b,int n,int *A){
  if(b==0) return true;
  if(i>=n) return false;
  bool res = judge(i+1,b,n,&A[0]) || judge(i+1,b-A[i],n,&A[0]);
  return res;
}

int main() {
  int n,q;
  cin >> n;
  int A[n];
  for(int l=0;l<n;l++){
    cin >> A[l];
  }
  cin >> q;
  int B[q];
  for(int l=0;l<q;l++){
    cin >> B[l];
  }

  for(int k=0;k<q;k++){
    int b = B[k];
    if(judge(0,b,n,&A[0])){
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  
  return 0;
}