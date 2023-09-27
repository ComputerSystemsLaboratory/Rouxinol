#include "bits/stdc++.h"
using namespace std;

int main(){
	map<int,int> mp;
	int a;
	while(cin>>a){
		mp[a]++;
	}
	int ans=0;
	for(int i=0;i<101;i++){
		int b=mp[i];
		ans=max(ans,b);
	}
	
	for(int i=0;i<101;i++){
		if(mp[i]==ans)cout<<i<<endl;
	}
	
	return 0;
}