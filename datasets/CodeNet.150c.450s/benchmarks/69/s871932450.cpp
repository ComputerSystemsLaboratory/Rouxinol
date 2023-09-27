#include<bits/stdc++.h>
using namespace std;
signed main(void){
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
		int a=0,b=0,ok=true;
		for(int i=1,x;i<=10;i++){
			cin>>x;
			if(!ok)continue;
			if(x<a&&x<b){
				cout<<"NO"<<endl;
				ok=false;
				continue;
			}
			else if(x>a&&x>b){
				if(a>b)	a=x;
				else	b=x;
			}
			else if(x<a&&x>b){
				b=x;
			}
			else if(x>a&&x<b){
				a=x;
			}
			if(i==10)
				cout<<"YES"<<endl;
		}
	}
}