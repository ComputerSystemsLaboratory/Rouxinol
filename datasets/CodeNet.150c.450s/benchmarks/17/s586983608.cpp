#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	vector<int> Vec(5);
	for(unsigned int i = 0; i < Vec.size(); ++i)
	{
		cin >> Vec[i];
	}
	sort(Vec.begin(), Vec.end());
	for(unsigned int i = Vec.size() - 1; i > 0; --i)
	{
		cout << Vec[i] << " ";
	}
	cout << Vec[0] << endl;
}

int main()
{
	solve();
	return(0);
}