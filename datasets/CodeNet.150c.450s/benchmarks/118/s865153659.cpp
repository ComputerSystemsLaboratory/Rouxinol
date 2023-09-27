#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0,num[3],ans;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>num[j];
			if(j!=2)num[j]--;
		}
		if((num[0]+1)%3==0)ans=num[1]*20;
		else ans=num[1]/2*39+num[1]%2*20;
		cout<<196471-ans-num[0]/3*590-num[0]%3*195-num[2]<<endl;
	}
}