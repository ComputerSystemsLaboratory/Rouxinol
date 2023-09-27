#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,r[200000],i,j,max1=-1000000000,min1;
  cin >> n;
  for(i=0;i<n;i++) cin >> r[i];
  min1=r[0];
  for(i=1;i<n;i++){
    max1=max(r[i]-min1,max1);
    min1=min(r[i],min1);
  }
  cout << max1 << endl;
  return 0;
}