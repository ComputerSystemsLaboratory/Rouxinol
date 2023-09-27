#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n = 0;
	cin >> n;

	vector<int> list;
	list.reserve(n);
	for(int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	for(int i = n - 1; i >= 0; i--)
	{
		cout << list[i];
		if(i != 0){ cout << ' '; }
	}
	cout << endl;



	return 0;
}