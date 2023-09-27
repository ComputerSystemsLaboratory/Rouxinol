#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int main() {

	vector<int> ans;
	int a, b;
	//int cnt = 0;

	while (1) {
		cin >> a >> b;
		if (cin.eof()) { break; }
		ans.push_back(a + b);
	}

	for (int i = 0; i < ans.size(); i++)
	{
		string str = to_string(ans[i]);
		cout << str.size() << endl;
	}

	return 0;
}