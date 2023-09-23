#include<bits/stdc++.h>

using namespace std;

int main(){

  int n;

  while(1){
	cin>>n;

	if(n==0)
	  break;
	
	int sum=0;
	int cnt=0;
	
	for(int i=1;i<n;++i){
	  sum=i;
	  for(int j=i+1;i<=n;++j){
		sum+=j;
		if(sum==n){
		  cnt++;
		  break;
		}
		else if(sum>n){
		  break;
		}
		
	  }
	  
	}
	cout<<cnt<<endl;
  }
}

