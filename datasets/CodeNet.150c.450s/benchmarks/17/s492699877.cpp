#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans[6],i;
	for(i = 0;i < 5;i++){
		cin>>ans[i];
	}
	sort(ans,ans+5);

	while(i--){
		if(i == 4)
		cout<<ans[i];
		else
		cout<<" "<<ans[i];
	}
	cout<<endl;

	return 0;
}