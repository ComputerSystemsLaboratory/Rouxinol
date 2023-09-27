#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
#define INF (1<<29)

#define INDEX(s,c) (find(s.begin(),s.end(),c)-s.begin()) 
int decode(string s){
	int i,no=s.size();
	int res=0;
	i = INDEX(s,'m');
	if(i!=no){
		if(i && isdigit(s[i-1]))res += 1000*(s[i-1]-'0');
		else res += 1000;
	}
	i = INDEX(s,'c');
	if(i!=no){
		if(i && isdigit(s[i-1]))res += 100*(s[i-1]-'0');
		else res += 100;
	}
	i = INDEX(s,'x');
	if(i!=no){
		if(i && isdigit(s[i-1]))res += 10*(s[i-1]-'0');
		else res += 10;
	}
	i = INDEX(s,'i');
	if(i!=no){
		if(i && isdigit(s[i-1]))res += 1*(s[i-1]-'0');
		else res += 1;
	}
	return res;
}
string encode(int n){
	string res;
	if(n%10){
		res += 'i';
		if(1<n%10)res += '0'+n%10;
	}
	n/=10;
	if(n%10){
		res += 'x';
		if(1<n%10)res += '0'+n%10;
	}
	n/=10;
	if(n%10){
		res += 'c';
		if(1<n%10)res += '0'+n%10;
	}
	n/=10;
	if(n%10){
		res += 'm';
		if(1<n%10)res += '0'+n%10;
	}
	reverse(res.begin(),res.end());
	return res;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		string s,t;
		cin>>s>>t;
		int a=decode(s),b=decode(t);
		//cout<<a+b<<endl;
		cout<<encode(a+b)<<endl;
	}
	return 0;
}