#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

const static double pi = 4*atan(1.0);
int main(){

	for(int i=0;;i++){
		int a,b;
		char op;
		cin >> a >> op >> b;
		if(op=='+')
			cout << a+b << endl;
		else if(op=='-')
			cout << a-b << endl;
		else if(op=='*')
			cout << a*b << endl;
		else if(op=='/')
			cout << a/b << endl;
		else
			break;
	}

	return 0;
}