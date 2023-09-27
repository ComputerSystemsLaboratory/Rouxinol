#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin>>n,n){
		string str,a="rldu";
		bool leg[2]={};
		int ans=0,now=1,num[2]={0,1};
		for(;n>0;n--){
			cin>>str;
			for(int i=0;i<2;i++)if(str[0]==a[i])for(int j=0;j<2;j++)if(str[1]==a[2+j])leg[i]=num[j];
			if(now==leg[0]&&now==leg[1]){
				ans++;
				now=(now+1)%2;
			}
		}
		cout<<ans<<endl;
	}
}