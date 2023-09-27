#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(){

	vector<int> hills(10);

	for (auto& a : hills) {
		cin >> a;
	}

	sort(hills.begin(), hills.end(), greater<int>());

	for (int i = 0; i < 3; i++)
	{
		cout << hills[i] << endl;
	}
	
	return 0;
}