#include<iostream>
#include <cstdio>
#include<cctype>
#include <algorithm>
#include<string>

using namespace std;

int main(){
	int cnt = 0,a = 0,b = 0;
	string str, cmd , p;
	
	cin >> str;
	cin >> cnt;
	
	for(int x = 0; x < cnt; x++){
		cin >> cmd >> a >> b;
	
		if (cmd == "print"){
			cout << str.substr(a,b-a+1) << endl;
		}
		else if (cmd == "reverse"){
			reverse(str.begin()+a,str.begin()+b+1);
		}
		else if (cmd == "replace"){
			cin >> p;
			str.replace(a,p.length(),p);
		}
	}
	
	return 0;
}