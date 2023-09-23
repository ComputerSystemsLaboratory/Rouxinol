#include<bits/stdc++.h>
using namespace std;
signed main(void){
	ios::sync_with_stdio(false);
	int T,in[10],a,b,flag;
	cin>>T;
	while(T--){
		a=b=flag=0;
		for(int i=0;i<10;i++)
			cin>>in[i];
		for(int i=0;i<10;i++){
			int x=in[i];
			if(x>a&&x>b){
				if(a>b)	a=x;
				else	b=x;
			}
			else if(x<a&&x<b){
				flag=1;
				break;	
			}
			else if(x>a)
				a=x;
			else if(x>b)
				b=x;
		}
		if(flag)	cout<<"NO"<<endl;
		else 		cout<<"YES"<<endl;
	}
}