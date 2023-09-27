#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace  std;
int toInt(string s)
{
	int ret;
	stringstream ss;
	ss << s;
	ss >> ret;
	return ret;
}
int main()
{
	int w, n;
	vector<pair<int, int> > v;
	cin >> w >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		int index = s.find(',',0);
		int a = toInt(s.substr(0, index));
		int b = toInt(s.substr(index + 1));
		v.push_back(make_pair(a, b));
	}
	int numbers[40];
	for (int i = 0; i < w; i++)numbers[i] = i + 1;
	for (int i = 0; i < v.size(); i++)
	{
		int tmp = numbers[v[i].first - 1];
		numbers[v[i].first - 1] = numbers[v[i].second - 1];
		numbers[v[i].second - 1] = tmp;
	}
	for (int i = 0; i < w; i++)cout << numbers[i] << endl;
	return 0;
}