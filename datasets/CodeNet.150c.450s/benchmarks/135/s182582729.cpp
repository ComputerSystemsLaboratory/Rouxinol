#include<iostream>
using namespace std;
int h[1500001]={},w[1500001]={},n,m,i,j,p[1500],k;
int main(){
  while(1){
    cin>>n>>m;if(n==0)break;
    for(i=0;i<n;i++){
      cin>>p[i];
      for(j=i,k=0;j>=0;j--)k+=p[j],h[k]++;
    }
    n=k;
    for(i=0;i<m;i++){
      cin>>p[i];
      for(j=i,k=0;j>=0;j--)k+=p[j],w[k]++;
    }
    if(k<n)k=n;
    n=0;
    for(i=1;i<=k;i++)n+=h[i]*w[i],h[i]=w[i]=0;
    cout<<n<<endl;
  }
  return 0;
}