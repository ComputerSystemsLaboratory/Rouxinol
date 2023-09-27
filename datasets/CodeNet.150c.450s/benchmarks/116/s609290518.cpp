#include <iostream>
#include <algorithm>
#define N 100000
using namespace std;
int main(){
  int n,k,in[N],maxv,sum,i;
  while(1){
    cin >> n >> k;
    if(n==0&&k==0) break;
    maxv=-2000000;
    sum=0;
    for(i=0;i<n;i++){
      cin >> in[i];
      sum+=in[i];
      if(i>=k){
	sum-=in[i-k];
      }
      if(i>=k-1) maxv=max(maxv,sum);
    }
    cout << maxv << endl;
  }
  return 0;
}