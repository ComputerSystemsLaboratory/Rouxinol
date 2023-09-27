#include<iostream>
using namespace std;

int main()
{
	int coun=1;
	int u;
	while (true)
	{
		cin >> u;
		if (u == 0)
		{
			break;
		}
		cout << "Case " << coun << ": " << u << endl;
		coun++;
	}	
}