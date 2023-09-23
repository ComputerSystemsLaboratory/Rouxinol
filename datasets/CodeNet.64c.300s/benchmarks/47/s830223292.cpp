#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a(100, 0);
	int n;
	int max_num = 0;
	
	while(cin >> n)
	{
		a[n-1] = a[n-1]+1;

	}
	max_num = *max_element(a.begin(), a.end());
	for(int i=0; i<a.size(); i++)
	{
		if(a[i] == max_num)
		{
			cout << i+1 << endl;
		}
	}
	return 0;
}