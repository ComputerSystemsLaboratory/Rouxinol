#include<iostream>
using namespace std;
int main(){
  int n,r,fu[51];
  while(1){
    cin>>n>>r;
    if(n==0&&r==0)break;
    for(int i=1;i<=n;i++)fu[i]=n+1-i;
    for(int j=0;j<r;j++){
      int p,c,cp[50];
      cin>>p>>c;
      for(int k=0;k<c;k++){
	cp[k]=fu[p+k];
	}
      for(int k=p+c-1;k-c>=1;k--){
	fu[k]=fu[k-c];
      } 
      for(int k=1;k<=c;k++){
	fu[k]=cp[k-1];
	}
    }
    cout<<fu[1]<<endl;
  }
  return 0;
}