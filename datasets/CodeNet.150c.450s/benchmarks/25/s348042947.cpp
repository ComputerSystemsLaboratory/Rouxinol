#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
	int b[26]={};
	char c;
	int d=1;
	for(int q=0;;q++){
	getline(cin,a);
	if(a==""){d=0;}
	if(d==0)break;
	for(int i=0;i<a.length();i++){
		if('A'<=a[i]&&a[i]<='Z'){
			a[i]=a[i]-'A'+'a';
		}
	}
	for(int i=0;i<a.length();i++){
		for(int j=0;j<26;j++){
			if(a[i]=='a'+j){
			b[j]++;
			}
		}
	}
	}
	for(int i=0;i<26;i++){
		c=(char)i+97;
		cout <<c<<" : "<<b[i]<< endl;
	}
	return 0;
}