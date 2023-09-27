#include <string>
#include <cctype>
#include <iostream>

using namespace std;

int toInt(char c){// m c x i
	switch(c){
	case 'm':
		return 1000;
	case 'c':
		return 100;
	case 'x':
		return 10;
	case 'i':
		return 1;
	}
	cout << "impossible" << endl;
	return 0;
}

int encode(string str){
	int ret=0;
	for(int i=0;i<str.size();i++){
		char c = str[i];
		int mul=1;
		if('0' <= c && c<='9'){
			mul=c-'0';
			i++;
			c = str[i];
		}
		ret += mul*toInt(c);
	}
	return ret;
}

string decode(int n){
	string ret;
	//m
	if(n>=1000){
		int d = n/1000;
		n = n%1000;
		if(d>1)ret.push_back('0'+d);
		ret.push_back('m');
	}
	//c
	if(n>=100){
		int d = n/100;
		n = n%100;
		if(d>1)ret.push_back('0'+d);
		ret.push_back('c');
	}
	//x
	if(n>=10){
		int d = n/10;
		n = n%10;
		if(d>1)ret.push_back('0'+d);
		ret.push_back('x');
	}
	// i
	if(n>=1){
		int d = n/1;
		//n = n%1;
		if(d>1)ret.push_back('0'+d);
		ret.push_back('i');
	}
	return ret;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		string a,b;
		cin >> a >> b;
		string ans = decode(encode(a)+encode(b));
		cout << ans << endl;
	}
}