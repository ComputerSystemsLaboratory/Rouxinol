#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int i,j,k,N;
  int a[100];
  cin >> N;
  for(i=0;i<N;++i){
    std::cin >> a[i];
  }
  for(i =0;i<N;++i) cout << (i==0 ? "" : " ") << a[i]; cout << endl;
  for (i=1; i<N; ++i){
    k = a[i];
    j = i-1;
    while(j >= 0 && a[j] > k){
      a[j+1] = a[j];
      --j;
    }
    a[j+1] = k;
    for(k =0;k<N;++k) cout << (k==0 ? "" : " ") << a[k]; cout << endl;
  }
}