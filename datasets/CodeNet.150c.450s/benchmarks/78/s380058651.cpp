#include<iostream>
using namespace std;

int main()
{
  int N,S[1000],SS[1000],SSS[1000],P[1000001],OP[1000001],a=0;
  S[0]=0;P[0]=0;OP[0]=0;
  for(int i=1;i<1000001;i++){
    OP[i]=P[i]=10000001;
  }
  for(int i=1;i<300;i++){
    S[i]=S[i-1]+i;
  }
  SS[0]=0;
  for(int i=1;i<300;i++){
    SS[i]=SS[i-1]+S[i];
    if(SS[i]%2==1)SSS[a++]=SS[i];
  }
  for(int i=0;i<a;i++){
    for(int j=SSS[i];j<1000001;j++){
      OP[j]=min(OP[j],OP[j-SSS[i]]+1);
    }
  }
  for(int i=1;i<300;i++){
    for(int j=SS[i];j<1000001;j++){
      P[j]=min(P[j],P[j-SS[i]]+1);
    }
  }
  while(1){
    cin>>N;
    if(N==0)break;
    cout<<P[N]<<" "<<OP[N]<<endl;
  }
  return 0;
}