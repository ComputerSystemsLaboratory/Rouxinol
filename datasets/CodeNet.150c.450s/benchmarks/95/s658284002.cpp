#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin>>n,n){
		string str;
		bool right=0,left=0;
		int ans=0;
		for(int i=0,now=1;i<n;i++){
			cin>>str;
			if(str=="lu")left=1;
			if(str=="ru")right=1;
			if(str=="ld")left=0;
			if(str=="rd")right=0;
			if(now==right&&right==left){
				ans++;
				now=(now+1)%2;
			}
		}
		cout<<ans<<endl;
	}
}