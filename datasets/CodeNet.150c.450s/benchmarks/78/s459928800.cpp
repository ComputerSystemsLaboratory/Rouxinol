#include<bits/stdc++.h>
using namespace std;
int b[1000000],d[1000000];
int main(){
  
  int c[181];
  fill(b,b+1000000,1000000);
  fill(d,d+1000000,1000000);
  for(int i=1;i<=180;i++){
    c[i] = i*(i+1)*(i+2)/6;
    b[ c[i] ] = 1;
    if(c[i]%2 == 1) d[ c[i] ] = 1;
  }
  
  for(int i=1;i<=180;i++){
    for(int j=1;j<1000000-c[i];j++){
      b[j+c[i]] = min(b[j+c[i]],b[j]+1);
      if(c[i]%2 == 1) d[j+c[i]] = min(d[j+c[i]],d[j]+1);
    }
  }
  
  
  
  int n;
  while(cin>>n,n!=0)
    cout << b[n] << ' ' << d[n] << endl;
  
  return (0);
}