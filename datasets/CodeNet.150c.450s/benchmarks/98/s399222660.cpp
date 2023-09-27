#include<iostream>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
int main(){
  while(1){
    int n,m,sn[100]={},sm[100]={},nsum=0,msum=0;
    cin>>n>>m;
    if(n+m==0)break;
    f(i,n)cin>>sn[i],nsum+=sn[i];
    f(i,m)cin>>sm[i],msum+=sm[i];
    int min=1000000,sa=nsum-msum;
    f(i,n)f(j,m)if(2*(sn[i]-sm[j])==sa&&sn[i]+sm[j]<min)nsum=sn[i],msum=sm[j],min=sn[i]+sm[j];
    if(min==1000000)cout<<-1<<endl;
    else cout<<nsum<<" "<<msum<<endl;
  }
  return 0;
}