#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main() {
	int a,b;
	string moji;
	while(1){
		cin >> a >> moji >> b;
		if(moji=="?") break;
		if(moji=="+") cout << a+b;
		else if(moji=="-") cout << a-b;
		else if(moji=="*") cout << a*b;
		else if(moji=="/") cout << a/b;
		cout <<endl;
	}
	return 0;
}