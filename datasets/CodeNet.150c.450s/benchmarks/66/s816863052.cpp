#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	string ic[256],out,log[3]={"Opened by ","Closed by ","Unknown "};
	cin>>n;
	for(int i=0;i<n;i++)cin>>ic[i];
	cin>>m;
	for(int i=0,now=0,co=0;i<m;i++){
		cin>>out;
		for(int j=0;j<n&&co<1;j++)if(ic[j]==out)co=1;
		if(co==1)cout<<log[now]+out<<endl;
		else cout<<log[2]+out<<endl;
		now=(now+co)%2;
		co=0;
	}
}