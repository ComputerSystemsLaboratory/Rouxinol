#include <iostream>
using namespace std;
int main(){
  int n;
  while (cin>>n,n|n!=0){
    int b=1;
    int ans=0;
    int count=0;
    for (int k=2;k<n;k++){
      for (int i=1;i<n;i++){
	int j;
	for (j=i;j<i+k;j++){
	  ans=ans+j;
	}
	if (ans==n){
	  count++;
	  ans=0;
	  break;
	}
	else if (ans>n){
	  ans=0;
	  if (i==1)
	    b=0;
	  break;
	}
	ans=0;
      }
      if (b==0){
	break;
      }
    }
    cout<<count<<endl;
  }
}