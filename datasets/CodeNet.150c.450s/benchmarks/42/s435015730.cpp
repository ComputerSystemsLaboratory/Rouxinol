#include <iostream>
#include <queue>
#include <string>
#include <utility>

using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;

	typedef pair<string, int> process;
	queue<process> p;
	string name;
	int time;

	while (n--)
	{
		cin >> name >> time;
		p.push(process(name, time));
	}

	string ans;
	for (int i = q; !p.empty();)
	{
		name = p.front().first;
		time = p.front().second - q;

		if (time <= 0)
		{
			ans += p.front().first + " " + to_string(i + time) + "\n";
			p.pop(), i += (q + time);
		}
		else
			p.push(process(name, time)), p.pop(), i += q;
	}

	cout << ans;

	return 0;
}