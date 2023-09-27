#include <bits/stdc++.h>
using namespace std;
int toInt(string s){
	int num=0;
	for(int i=0;i<s.size();i++){
		num=num*10+(s[i]-'0');
	}
	return num;
}
string toStr(int n,int a){
	string s;
	for(int i=a-1;i>=0;i--){
		int h=n/pow(10,i);
		h%=10;
		s+=(h+'0');
	}
	return s;
}
int main(){
	string s;int a;
	while(cin>>s>>a&&a!=0){
		vector<int> v;
		v.push_back(toInt(s));
		for(int i=0;i<30;i++){
			while((int)s.size()<a)s+='0';
			sort(s.begin(),s.end());
			int mini=toInt(s);
			reverse(s.begin(),s.end());
			int maxi=toInt(s);
			v.push_back(maxi-mini);
			s=toStr(maxi-mini,a);
		}
		int ans=10000,b,c;
		for(int i=0;i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
				if(v[i]==v[j]&&j<ans){
					ans=i;b=v[j];c=j-i;
				}
			}
		}
		cout<<ans<<" "<<b<<" "<<c<<endl;
	}
}