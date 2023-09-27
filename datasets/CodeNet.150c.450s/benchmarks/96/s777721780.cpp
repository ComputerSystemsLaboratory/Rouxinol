#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str,one=".,!? ",ans;
		cin>>str;
		for(int j=0,co=0,num=0;j<=str.size();j++){
			if(num==str[j]-'0')co++;
			else{
				if(num==1)ans+=one[co%5];
				else if(num==7)ans+=co%4+'p';
				else if(num==8)ans+=co%3+'t';
				else if(num==9)ans+=co%4+'w';
				else if(num>1)ans+=co%3+'a'+3*(num-2);
				co=0;
				num=str[j]-'0';
			}
		}
		cout<<ans<<endl;
	}
}