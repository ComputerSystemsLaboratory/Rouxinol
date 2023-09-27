#include<iostream>
#include <cstdio>
#include<cctype>
#include<string>

using namespace std;

int main(){
	int x;
	string s, s2, p;
	
	getline(cin,s);
	getline(cin,p);
	
	s2 = s + s;
	x = s2.find(p);
	
	if(x == -1) cout << "No" << endl;
	else		cout << "Yes" << endl;

	return 0;
}