#include<iostream>
using namespace std;

int main()
{
  int n,m,sumN=0,sumM=0,ii=-1,jj=-1,flag=0;
  int N[100],M[100];

  while(1){
    cin>>n;
    cin>>m;
    if(n==0&&m==0)break;
    for(int i=0;i<n;++i){
      cin>>N[i];
      sumN+=N[i];
    }
    for(int i=0;i<m;++i){
      cin>>M[i];
      sumM+=M[i];
    }

    for(int i=0;i<n;++i){
      for(int j=0;j<m;++j){
        if(sumN-N[i]+M[j]==sumM-M[j]+N[i]&&flag==0){
          ii=i;
          jj=j;
          flag=1;
	}
        if(sumN-N[i]+M[j]==sumM-M[j]+N[i]&&flag==1&&N[ii]+M[jj]>N[i]+M[j]){
          ii=i;
          jj=j;
	} 
        
      }
    }
    if(ii!=-1 && jj!=-1){
    cout<< N[ii]<<" "<<M[jj]<<endl;
    }
    else cout<<"-1"<<endl;
    flag=0;
    sumN=0;
    sumM=0;
    ii=-1;
    jj=-1;
  }
  return 0;
}