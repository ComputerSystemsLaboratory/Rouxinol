#include<iostream>
#include<stdio.h>
#include<cctype>
#include<string>
using namespace std;

int main(){
	string a, left, right;
	int h,m;
	while (1){
		cin >> a;
		if (a == "-")break;
		cin >> m;
		for (int i = 0; i < m;i++){
			cin >> h;
			left = a.substr(0, h);
			right = a.substr(h, a.size());
			a = right + left;
		}
		cout << a << endl;
	}

	return 0;
}