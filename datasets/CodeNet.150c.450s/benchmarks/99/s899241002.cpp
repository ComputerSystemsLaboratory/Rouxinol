#include<iostream>
#include<string>
#include<map>
using namespace std;
map<char,int> mcxi;
int main(){
	int n;
	mcxi['m']=1000;
	mcxi['c']=100;
	mcxi['x']=10;
	mcxi['i']=1;
	string num[11]={"0","1","2","3","4","5","6","7","8","9"};
	cin>>n;
	while(n--){
		int ans=0,a=1;
		string s,s1,s2;
		cin>>s1>>s2;
		s=s1;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='i' || s[i]=='x' || s[i]=='c' || s[i]=='m'){
				a=1;
				if(s[i-1]<=57 && s[i-1]>=50)
				a+=s[i-1]-'1';
				ans+=mcxi[s[i]]*a;
			}
		}
		s=s2;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='i' || s[i]=='x' || s[i]=='c' || s[i]=='m'){
				a=1;
				if(s[i-1]<=57 && s[i-1]>=50)
				a+=s[i-1]-'1';
				ans+=mcxi[s[i]]*a;
			}
		}
		if(ans>=1000){
			if(ans/1000>1)
			cout<<ans/1000;
			cout<<'m';
			ans-=ans/1000*1000;
		}
		if(ans>=100){
			if(ans/100>1)
			cout<<ans/100;
			cout<<'c';
			ans-=ans/100*100;
		}
		if(ans>=10){
			if(ans/10>1)
			cout<<ans/10;
			cout<<'x';
			ans-=ans/10*10;
		}
		if(ans>=1){
			if(ans>1)
			cout<<ans;
			cout<<'i';
		}
		cout<<endl;
	}
	return 0;
}