#include <bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k,b[1000001],c[1000001],a[200],n;
  for(i=0;a[i-1]<1000000;i++)a[i]=i*(i+1)*(i+2)/6;
  for(j=0;j<=1000000;j++)b[j]=c[j]=j;
  for(j=2;j<i;j++){
    for(k=a[j];k<=1000000;k++){
      b[k]=min(b[k],b[k-a[j]]+1);
      if(a[j]%2){
        c[k]=min(c[k],c[k-a[j]]+1);
      }
    }
  }
while(cin>>n,n){
cout<<b[n]<<' '<<c[n]<<endl;
}
return 0;
}