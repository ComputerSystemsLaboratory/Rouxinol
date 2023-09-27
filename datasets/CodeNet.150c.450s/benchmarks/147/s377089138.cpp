#include<iostream>
using namespace std;

int f(int n) {
  int i,j,k,ret=0;
  for (i=1;(i+1)*(i+1)+2<=n;i++) {
    for (j=1;(j+1)*(j+1)+2<=n;j++) {
      for (k=1;(i*i + j*j + k*k + i*j + j*k + k*i)<=n;k++) {
        if ((i*i + j*j + k*k + i*j + j*k + k*i) == n) ret++;
      }
    }
  }
  return ret;
}
int main() {
  int N,i;
  cin>>N;
  for (i=0;i<N;i++) {
    cout<<f(i+1)<<endl;
  }
  return 0;
}
