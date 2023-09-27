#include <iostream>

using namespace std;

int main()
{
	int list[31];
	int num;
	
	for (int i=1; i<=30; i++) list[i] = 0;
	for (int i=0; i<28; i++)
	{
		cin >> num;
		list[num] = 1;
	}
	for (int i=1; i<=30; i++)
	{
		if (list[i] == 0) cout << i << "\n";
	}
	
	return 0;
}