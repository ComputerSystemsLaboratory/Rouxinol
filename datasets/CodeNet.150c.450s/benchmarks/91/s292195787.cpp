#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

int main(){

  vector<int> prime(MAX,1);
  vector<int> ans;
  
  prime[0] = 0;
  prime[1] = 0;
  prime[2] = 1;
	
  for(int i=4;i<MAX;i+=2)
	prime[i] = 0;
	
  for(int i=3;i<sqrt(MAX);i+=2)
	for(int j=i+i;j<MAX;j+=i)
	  prime[j] = 0;
  
  int n;
  
  while(cin>>n){
	int cnt = 0;
	for(int i=0;i<=n;++i)
	  if(prime[i]==1)
		cnt++;
	cout<<cnt<<endl;
  }
	
  return 0;
  
}

