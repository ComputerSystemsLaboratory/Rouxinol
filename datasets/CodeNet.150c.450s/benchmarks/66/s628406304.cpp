#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m,now=0;
	string ic[257]={""},out,log[3]={"Opened by ","Closed by ","Unknown "};
	for(cin>>n;n>0;n--)cin>>ic[n];
	for(cin>>m;m>0;m--){
		bool kawa=0;
		cin>>out;
		for(int j=255;j>0&&!kawa;j--)if(ic[j]==out)kawa=1;
		if(kawa)cout<<log[now]+out<<endl;
		else cout<<log[2]+out<<endl;
		now=(now+kawa)%2;
	}
}