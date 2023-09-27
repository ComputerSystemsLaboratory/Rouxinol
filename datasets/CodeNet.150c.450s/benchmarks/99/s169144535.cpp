#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int getval(string str){
	
	int ret = 0;
	int st=1;
	rep(i,str.size()){
		if(str[i]=='m'){
			ret+=st*1000;
			st=1;
		}
		if(str[i]=='c'){
			ret+=st*100;
			st=1;
		}
		if(str[i]=='x'){
			ret+=st*10;
			st=1;
		}
		if(str[i]=='i'){
			ret+=st*1;
			st=1;
		}
		if(str[i]>='2' && str[i]<='9'){
			st = str[i]-'0';
		}
	}
	
	return ret;
}

string getstr(int num){
	
	string ret = "";
	int st;
	st = num/1000;
	if(st!=0){
		if(st!=1)ret += char('0'+st);
		ret += 'm';
	}
	num%=1000;
	
	st = num/100;
	if(st!=0){
		if(st!=1)ret += char('0'+st);
		ret += 'c';
	}
	num%=100;
	
	st = num/10;
	if(st!=0){
		if(st!=1)ret += char('0'+st);
		ret += 'x';
	}
	num%=10;
	
	st = num;
	if(st!=0){
		if(st!=1)ret += char('0'+st);
		ret += 'i';
	}
	
	return ret;
}

int main(){
	int n;
	cin>>n;
	
	rep(i,n){
		string s1,s2;
		cin>>s1>>s2;
		
		int val = getval(s1)+getval(s2);
		cout<<getstr(val)<<endl;
	}
}