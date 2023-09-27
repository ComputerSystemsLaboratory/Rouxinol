#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string ans[1000];
	string str,left, right;
	int m, h, Bool, cou = 0;
	while(1){
		cin >> str;
		if (str == "-") break;
		cin >> m;
		for (int i = 0; i < m;i++){
			cin >> h;
			left = str.substr(0, h);right = str.substr(h, str.size()-h);
			str = right + left;
		}
		ans[cou] = str;
		cou++;
	}
	for (int i = 0; i < cou; i++) {
		cout << ans[i] << endl;
	}
	
}