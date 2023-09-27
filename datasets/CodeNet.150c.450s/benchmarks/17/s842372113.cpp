#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
int main()
{
	int i, j;
	int num[5];
	
	for(i = 0; i < 5; i++)
	{
		cin >> num[i];
	}
	
	stable_sort(num, num + 5, greater<int>());
	
	for(i = 0; i < 4; i++)
	{
		cout << num[i] << " ";
	}
		
		cout << num[4] << endl;
	
	return 0;
}