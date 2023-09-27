#include<iostream>
#include<queue>
#include<string>
using namespace std;



int main()
{
	int n, q;
	int time = 0;
	queue <int> queNum;
	queue <string> queName;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		int N;
		string name;
		cin >> name;
		cin >> N;
		queName.push(name);
		queNum.push(N);
	}
	while (1)
	{
		int ans = queNum.front() - q;
		if (ans <= 0)
		{
			cout << queName.front() << " " << time+q+ans << endl;
			queNum.pop();
			queName.pop();
		}
		else
		{
			queNum.push(ans);
			queName.push(queName.front());
			queNum.pop();
			queName.pop();
		}

		if (queNum.empty()) break;

		if (ans > 0)ans = 0;
		time += q+ans;
	}
	return 0;
}