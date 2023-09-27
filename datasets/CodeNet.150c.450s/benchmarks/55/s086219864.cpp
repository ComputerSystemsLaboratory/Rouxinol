#include<iostream>
#include <cstdio>
#include<cctype>
#include<string>

using namespace std;

int main(){
	
	string s;
	
	while(1){
		cin >> s;
		
		if(s == "0") break;
		
		int l = s.length();
		
		int sum = 0;
		for(int i = 0; i < l; i++)
			sum += s[i] - '0';
		
		cout << sum << endl;
	}
	
	return 0;
}