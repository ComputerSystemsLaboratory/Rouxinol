#include <iostream>
using namespace std;

const int MAX = 2000000;
const int VMAX = 10000;
int A[MAX+1], B[MAX+1], C[10000+1];
int n;

void countingsort(int a[], int b[], int k){
  for(int i=0;i<k;i++){
    C[i] = 0;
  }
  for(int j=0;j<k;j++) C[a[j]]++;
  for(int i=1;i<VMAX;i++) C[i] += C[i-1];
  // for(int i=0;i<VMAX;i++){
  //   if(i != n-1) cout << C[i] << " ";
  //   else cout << C[i] << endl;
  // }

  for(int j=k-1;j>=0;j--){
    b[C[a[j]]-1] = a[j];
    C[a[j]]--;
    // for(int i=0;i<n;i++){
    //   if(i != n-1) cout << B[i] << " ";
    //   else cout << B[i] << endl;
    // }
  }
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++) cin >> A[i];

  countingsort(A, B, n);
  for(int i=0;i<n;i++){
    if(i != n-1) cout << B[i] << " ";
    else cout << B[i] << endl;
  }
  return 0;
}

