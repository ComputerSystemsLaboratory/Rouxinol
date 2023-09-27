#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin>>n,n){
		string str;
		bool right=0,left=0;
		int ans=0,now=1;
		for(;n>0;n--){
			cin>>str;
			if(str=="lu")left=1;
			else if(str=="ru")right=1;
			else if(str=="ld")left=0;
			else right=0;
			if(now==right&&right==left){
				ans++;
				now=(now+1)%2;
			}
		}
		cout<<ans<<endl;
	}
}