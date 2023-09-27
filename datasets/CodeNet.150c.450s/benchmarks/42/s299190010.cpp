#include <queue>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	queue<string> name;
	queue<int> time;

	int n, q;

	cin >> n >> q;

	for (int i = 0; i < n; i++)
	{
		int A; string S1;

		cin >> S1 >> A;

		name.push(S1);
		time.push(A);
	}

	int T = 0;

	while (!time.empty())
	{
		if (time.front() <= q)
		{
			T += time.front();

			cout << name.front() << ' ' << T << endl;

			name.pop();
			time.pop();
		}
		else
		{
			string temp0 = name.front();

			int temp1 = time.front();

			T += q;

			name.pop(); name.push(temp0);
			time.pop(); time.push(temp1 - q);
		}
	}

	return 0;
}