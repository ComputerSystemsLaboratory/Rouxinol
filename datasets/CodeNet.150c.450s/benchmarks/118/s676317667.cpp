#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0,num[3];i<n;i++){
		for(int j=0;j<3;j++)cin>>num[j];
		num[0]-=1;
		num[1]-=1;
		int three=590,ans=num[0]/3*three+num[0]%3*195;
		if((num[0]+1)%3==0)ans+=num[1]*20;
		else ans+=num[1]/2*39+num[1]%2*20;
		cout<<196471-ans-num[2]<<endl;
	}
}