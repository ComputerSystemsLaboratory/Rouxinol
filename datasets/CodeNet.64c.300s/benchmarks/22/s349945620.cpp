#include <bits/stdc++.h>

using namespace std;
int s[4];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>s[1]>>s[2]>>s[3];
	sort(s+1,s+4);
	int a= (s[1]*s[1])+(s[2]*s[2]);
	if(s[3]*s[3]==a)
	{cout<<"YES"<<endl;}
	else {
		cout<<"NO"<<endl;
	}
}
}

