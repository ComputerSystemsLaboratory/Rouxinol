#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	string ic[256],out;
	cin>>n;
	for(int i=0;i<n;i++)cin>>ic[i];
	cin>>m;
	for(int i=0,now=0,co=0;i<m;i++){
		cin>>out;
		for(int j=0;j<n&&co<1;j++)if(ic[j]==out)co=1;
		if(co==1&&now==0)cout<<"Opened by "+out<<endl;
		else if(co==1&&now==1)cout<<"Closed by "+out<<endl;
		else cout<<"Unknown "+out<<endl;
		now=(now+co)%2;
		co=0;
	}
}