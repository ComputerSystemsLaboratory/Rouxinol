#include<iostream>
#include<string>
using namespace std;
int a[1000];
int main(){
      int n;
      cin>>n;
      for(int i=1;i<n+1;i++){
		  cin>>a[i];
	  }
	  for(int j=0;j<n;j++){
		  cout<<a[n-j];
		  if(j<n-1){
			  cout<<" ";
	  }
  }
  cout<<endl;
}

