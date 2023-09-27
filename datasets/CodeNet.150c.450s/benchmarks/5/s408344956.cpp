#include <iostream>
#include <vector>

int main()
{
	using namespace std;
	int N_num = 0;
	cin >> N_num;

	vector<int> data(N_num);

	for (int i = N_num - 1; i >= 0; i--)
	{
		cin >> data[i];
	}
	for (int i = 0; i < N_num; i++)
	{
		cout << data[i];
		if (i != N_num - 1)
			cout << ' ';
	}
cout<<'\n';
	return 0;
}