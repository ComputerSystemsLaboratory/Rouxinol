#include <iostream>
using namespace std;

void Swap(int *a,int *b) {
  int tp=*a;
  *a=*b;
  *b=tp;
}
int main() {
  std::ios::sync_with_stdio(false);
  cout.tie(0);
  cin.tie(0);
  int n;
  cin>>n;
  int A[n],r=n-1;
  for (int i=0; i<n; i++) {
    cin>>A[i];
  }
  int x=A[n-1],i=(-1);
  for (int j=0; j<r; j++) {
    if (A[j]<=x) {
      i++;
      Swap(&A[i],&A[j]);
    }
  }
  Swap(&A[i+1],&A[r]);
  int t=i+1;
  for (int k=0; k<n; k++) {
    if (k) {
      cout<<" "<<flush;
    }
    if (k==t) {
      cout<<"["<<flush;
    }
    cout<<A[k]<<flush;
    if (k==t) {
      cout<<"]"<<flush;
    }
  }
  cout<<endl;
  return 0;
}

