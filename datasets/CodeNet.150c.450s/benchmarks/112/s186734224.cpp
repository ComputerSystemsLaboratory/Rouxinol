#include<iostream>

using namespace std;

int main(){
  int n,m;
  while(1){
    cin>>n;
    char a[n],b[n],cha;
    if(n==0)
      break;
    for(int i=0;i<n;i++){
      cin>>a[i]>>b[i];
    }
    cin>>m;
 
    for(int i=0;i<m;i++){
      cin>>cha;
      for(int j=0;j<n;j++){
	if(cha==a[j]){
	  cout<<b[j];
	  break;
	}else if(j+1==n){
	  cout<<cha;
	}
      }
    }
   cout<<endl;
  }
}