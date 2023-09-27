#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int main () {
	int a,b,n,i;
	char c;
	string str,s,f,g;
	cin >> str;
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> s >>a >> b;
		if(s[2]=='i'){cout << str.substr(a,b-a+1) << endl;}
		else if(s[2]=='v'){
			f=str.substr(a,b-a+1);
			reverse(f.begin(),f.end());
			str = str.replace(a,b-a+1,f);
		}
		else if(s[2]=='p'){
			cin >> g;
			str = str.replace(a,b-a+1,g);
		}
	}
}