#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a[3];
		for(int i=0;i<3;i++)
			cin>>a[i];
		sort(a,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}