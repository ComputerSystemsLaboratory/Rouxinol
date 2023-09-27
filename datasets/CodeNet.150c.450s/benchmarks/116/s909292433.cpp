#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<vector>

#define rep(i,n) for(int i=0;i<int(n);i++)
#define sint(n) scanf("%d",&n)

using namespace std;


int main(){
	while(1){
		int n,k;
		sint(n);
		sint(k);
		
		if(n==0) break;
		
		int kazu[100000];
		rep(i,n) sint(kazu[i]);
		
		int syoki=0;
		
		rep(i,k) syoki+=kazu[i];
		
		int maxi=syoki;
		rep(i,n-k){
			syoki-=kazu[i];
			syoki+=kazu[i+k];
			maxi=max(syoki,maxi);
		}
		
		printf("%d\n",maxi);
	}
}