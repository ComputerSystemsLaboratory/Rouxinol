#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<int>x;
	string s;
	while (cin >> s){
		if (s == "0")break;
		int sum = 0;
		for (int i = 0; i != s.size(); i++){
			sum += s[i] - '0';
		}
		x.push_back(sum);
	}
	for (int i = 0; i != x.size(); i++)
	{
		cout << x[i] << endl;
	}
}