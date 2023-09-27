#include <iostream>
#include <string>
#include <stack>
#include <utility>
using namespace std;
// int synthesize_mizutamari(int m, int n)
// {
// 	return m + n;
// }
int main()
{
	stack<int> kudari;
	stack<pair<int, int>> mizutamari;

	string str;
	cin >> str;

	int S = 0; //総面積

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str.at(i) == '\\')
		{
			kudari.push(i);
		}
		else if (!kudari.empty() && str.at(i) == '/')
		{
			int s = i - kudari.top();
			S += s;
			pair<int, int> new_mizutamari = make_pair(kudari.top(), s);
			kudari.pop();
			while (!mizutamari.empty() && new_mizutamari.first < mizutamari.top().first)
			{
				new_mizutamari.second = new_mizutamari.second + mizutamari.top().second;
				mizutamari.pop();
			}
			mizutamari.push(new_mizutamari);
		}
	}

	cout << S << endl; //総面積
	int count = mizutamari.size();
	cout << count; //水たまりの数
	stack<int> area;
	for (int i = 0; i < count; i++) //各面積
	{
		area.push(mizutamari.top().second);
		mizutamari.pop();
	}
	for (int i = 0; i < count; i++)
	{
		cout << ' ' << area.top();
		area.pop();
	}

	cout << endl;
}

