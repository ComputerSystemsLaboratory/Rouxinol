#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int i,j,n,k,a[100000],b[100000],s,max;
  while(1){
    cin >> n >> k;
    if(n == 0 && k == 0) break;
    max = 0;
    s = 0;
    for(i=0;i<n;i++){
      cin >> a[i];

      s += a[i];
      b[i] = a[i];
      if(i >= k-1){
	if(max < s) max = s;
	s -= b[i-(k-1)];
      }
    }
    cout << max << endl;
  }
  return 0;
}