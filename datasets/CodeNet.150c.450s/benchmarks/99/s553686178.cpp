#include <iostream>
#include <cstdio>
using namespace std;

int mtoi(string s){
	int sum=0;
	int co=1;
	for(int i=0;i<s.length();i++){
		if('1'<=s[i] && s[i]<='9'){co=s[i]-'0';}
		else if(s[i]=='m'){sum+=1000*co;co=1;}
		else if(s[i]=='c'){sum+= 100*co;co=1;}
		else if(s[i]=='x'){sum+=  10*co;co=1;}
		else if(s[i]=='i'){sum+=   1*co;co=1;}
	}
	return sum;
}

string itom(int m){
	string result="";
	int co;
	
	co=m/1000;
	if(co>=1){
		if(co!=1)result+=(co+'0');
		result+="m";
		m-=co*1000;
	}
	
	co=m/100;
	if(co>=1){
		if(co!=1)result+=(co+'0');
		result+="c";
		m-=co*100;
	}
	
	co=m/10;
	if(co>=1){
		if(co!=1)result+=(co+'0');
		result+="x";
		m-=co*10;
	}
	
	co=m;
	if(co>=1){
		if(co!=1)result+=(co+'0');
		result+="i";
		m-=co*1;
	}
	return result;
}

int main() {
	
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		string s1,s2;
		cin >> s1 >> s2;
		cout << itom(mtoi(s1)+mtoi(s2)) << endl;
	}
	
	return 0;
}