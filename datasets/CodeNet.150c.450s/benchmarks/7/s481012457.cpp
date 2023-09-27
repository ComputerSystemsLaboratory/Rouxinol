#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n =10;
	vector < int > hills;
	hills.resize(n);
	for(int i = 0; i < n; ++i)
	{
		cin >> hills[i];
	}

	sort(hills.begin(), hills.end(), greater<int>());

	int output_num = 3;
	for(int i = 0; i < output_num; ++i)
	{
		cout << hills[i] << endl;
	}

	return 0;
}