#include<cctype>
#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int decode(string s){
	int a=1,ans=0;
	for(int i=0;i<s.length();i++){
		if(isdigit(s[i]))	a=s[i]-'0';
		if(s[i]=='m')		ans+=a*1000,a=1;
		if(s[i]=='c')		ans+=a*100,a=1;
		if(s[i]=='x')		ans+=a*10,a=1;
		if(s[i]=='i')		ans+=a*1,a=1;
	}
	return ans;
}

string encode(int a){
	char v[5],*b="mcxi";
	sprintf(v,"%04d",a);
	string s;
	for(int i=0;i<4;i++){
		if(v[i]>'1')	s+=v[i];
		if(v[i]>'0')	s+=b[i];
	}
	return s;
}

int main(){
	int n;	cin>>n;
	while(n--){
		int ans=0;
		for(int i=0;i<2;i++){
			string s;	cin>>s;
			ans+=decode(s);
		}
		cout<<encode(ans)<<endl;
	}
	return 0;
}