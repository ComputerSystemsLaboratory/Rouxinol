#include <bits/stdc++.h>
using namespace std;
string Replace(string str){
	int a,b;
	string p;
	cin>>a>>b>>p;
	for(int i=0;i<=b-a;i++) str[i+a]=p[i];
	return str;
}

string Reverse(string str){
	int a,b;
	cin>>a>>b;
	for(int i=0;i<=(b-a)/2;i++){
		char c=str[i+a];
		str[i+a]=str[b-i];
		str[b-i]=c;
	}
	return str;
}

void Print(string str){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		cout<<str[i];
	}
	cout<<endl;
}

int main(){
	string str;
	int q;
	cin>>str>>q;
	for(int i=0;i<q;i++){
		string s;
		cin>>s;
		if(s=="replace") str=Replace(str);
		if(s=="reverse") str=Reverse(str);
		if(s=="print") Print(str);
	}
	return 0;
}

