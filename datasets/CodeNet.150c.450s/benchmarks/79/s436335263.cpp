#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std; 
int main(){
  int n,r;
  int a[60]={}; 
  while(cin>>n>>r){
    if(n==0&&r==0)break;
    for(int i=0;i<n;i++){
      a[i]=n-i;
    }
    int b[60]={};
    for(int i=0;i<r;i++){
      int p,c;
      cin>>p>>c;
      for(int j=0;j<c;j++){
	b[j]=a[p-1+j];	
      }
      for(int j=0;j<p-1;j++){
	b[j+c]=a[j];
      }
      for(int j=0;j<n-p-c+1;j++){
	b[j+p+c-1]=a[j+p+c-1];
      }

      for(int i=0;i<n;i++){	
	a[i]=b[i];
      }
    }
    cout<<b[0]<<endl;
  }  
  return 0;
}