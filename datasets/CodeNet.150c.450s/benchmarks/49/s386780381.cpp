#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
	while (true)
	{
		int n;
		list<int> L;
		cin >> n;
		if (!n)
			break;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			sum += x;
			L.push_back(x);
		}
		L.sort();
		sum -= (L.front() + L.back());
		cout << sum / (n - 2)<<endl;
	}		
}
