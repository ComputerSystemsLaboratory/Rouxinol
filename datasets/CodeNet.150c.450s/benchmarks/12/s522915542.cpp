#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int * CBTree = new int[n+1];
	
	for (int i =1; i <= n; i++)
	{
		cin >> CBTree[i];
	}
	
	for (int i =1; i <= n; i++)
	{
		cout << "node " << i << ": ";
		cout << "key = " << CBTree[i] << ", ";
		
		if (i != 1)
			cout << "parent key = " << CBTree[i/2] << ", ";
		if (2*i <= n)
			cout << "left key = " << CBTree[2*i] << ", ";
		if (2*i+1 <= n)
			cout << "right key = " << CBTree[2*i+1] << ", ";
		
		cout << endl;
	}
}
