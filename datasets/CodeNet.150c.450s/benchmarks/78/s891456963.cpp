#include<iostream>
using namespace std;
int main(){
  int a,b,c,n,x[9999],y[9999],X[1000001],Y[1000001];
  a=b=c=1;
  while(1){
    x[a]=c*(c+1)*(c+2)/6;
    if(x[a]>1000000)break;
    a++;
    if(x[a-1]%2==1){
      y[b]=x[a-1];
      b++;
    }
    c++;
  }

  X[0]=0;
  for(int i=1;i<=1000000;i++)X[i]=i;
  for(int i=1;i<a;i++){
    for(int j=x[i];j<=1000000;j++){
      if(X[j]>X[j-x[i]]+1)X[j]=X[j-x[i]]+1;
    }
  }

  Y[0]=0;
  for(int i=1;i<=1000000;i++)Y[i]=i;
  for(int i=1;i<b;i++){
    for(int j=y[i];j<=1000000;j++){
      if(Y[j]>Y[j-y[i]]+1)Y[j]=Y[j-y[i]]+1;
    }
  }
  while(1){
    cin>>n;
    if(n==0)break;
    cout<<X[n]<<' '<<Y[n]<<endl;
  }
  return 0;
}