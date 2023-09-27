#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string s1=" ";
	int sum=0;

	while(1){
		cin >> s1;
		if(s1=="0") break;
		sum = 0;
		for(int i=0;i<s1.length();i++){
			sum += (int)s1[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}