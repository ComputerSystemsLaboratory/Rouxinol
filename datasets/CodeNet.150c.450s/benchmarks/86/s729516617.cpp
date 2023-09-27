#include<iostream>

using namespace std;

int main(){

  int n,m,p,sum=0,k;

  while(cin>>n>>m>>p){

    if(n==0&&m==0&&p==0){
      break;
    }

      int x[n];
      for(int i=0;i<n;i++){
	cin>>x[i];
      }

      if(x[m-1]==0){
	cout<<0<<endl;
      }else{

	for(int t=0;t<n;t++){

	    sum=sum+x[t];

	}

	sum=sum*100;

	k=sum-sum*p/100;
      

    
      cout<<k/x[m-1]<<endl;
      }

      sum=0;
    
    }

  return 0;
}