#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int McxiToInt(string s){
	int ret=0;
	int p=1;
	
	for(int i=0; i<s.size(); ++i){	
		if('2'<=s[i] && s[i]<='9') p=s[i]-'0';
		else{ //数字じゃなければ絶対mcxiがくる
			int by;
			if(s[i]=='m') by=1000;
			else if(s[i]=='c') by=100;
			else if(s[i]=='x') by=10;
			else if(s[i]=='i') by=1;
			
			ret+=p*by;
			p=1;
		}
	}
		
	return ret;
}

string IntToMcxi(int n){
	int a[4];
	char mcxi[5]="mcxi";
	string ret="";
	
	for(int i=0; i<4; ++i){
		a[3-i] = n%10; 
		n/=10;
	}	
	for(int i=0; i<4; ++i){
		//printf("a[%d]=%d\n", i, a[i]);
		if(a[i]==0) continue;	
		else if(a[i]==1) ret+=mcxi[i];
		else{
			char c='0'+a[i];
			ret+=c;
			ret+=mcxi[i];
		}
		
	}
	
	return ret;
}

int main(){
	int n;
	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		string a, b;
		cin >> a >> b;	
		//cout << McxiToInt(a) + McxiToInt(b) << endl;
		cout << IntToMcxi( McxiToInt(a) + McxiToInt(b) ) <<endl;
	}
	return 0;
}