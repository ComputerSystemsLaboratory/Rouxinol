#include<iostream>
using namespace std;

int main()
{
  int S[13],H[13],C[13],D[13],n,num;
  char CC;
  cin>>n;
  for(int i=0;i<13;i++){
    S[i]=0;
    H[i]=0;
    C[i]=0;
    D[i]=0;
  }
  for(int i=0;i<n;i++){
    cin>>CC>>num;
    if(CC=='S')S[num-1]=1;
    if(CC=='H')H[num-1]=1;
    if(CC=='C')C[num-1]=1;
    if(CC=='D')D[num-1]=1;
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<13;j++){
      if(i==0&&S[j]!=1)cout<<"S "<<j+1<<endl; 
      if(i==1&&H[j]!=1)cout<<"H "<<j+1<<endl;   
      if(i==2&&C[j]!=1)cout<<"C "<<j+1<<endl;  
      if(i==3&&D[j]!=1)cout<<"D "<<j+1<<endl;
    }
  }
  return 0;
}