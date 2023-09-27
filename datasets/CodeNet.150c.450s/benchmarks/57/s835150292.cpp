#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<cmath>
#include<vector>
#include<functional>
#include<stack>
#include<utility>
#include<stack>

using namespace std;

int main() {
	int a, b;
	char op;
	vector<int> ans;
	while (cin >> a >> op >> b) {
		if (op == '?')break;
		switch (op){
		case '+':
			ans.push_back(a + b);
			break;
		case '-':
			ans.push_back(a - b);
			break;
		case '*':
			ans.push_back(a * b);
			break;
		case '/':
			ans.push_back(a / b);
			break;
		}
	}
	for (int i = 0; i < ans.size(); i++)cout << ans[i] << endl;
	return 0;
}