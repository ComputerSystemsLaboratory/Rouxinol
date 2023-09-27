#include <iostream>

using namespace std;

int main()
{
	int n[3];
	
	for (int i=0; i<3; i++) cin >> n[i];
	
	//並べ替え
	int tmp;
	if (n[0] > n[1])
	{
		tmp = n[0];
		n[0] = n[1];
		n[1] = tmp;
	}
	if (n[1] > n[2])
	{
		tmp = n[1];
		n[1] = n[2];
		n[2] = tmp;
	}
	if (n[0] > n[1])
	{
		tmp = n[0];
		n[0] = n[1];
		n[1] = tmp;
	}
	
	for (int i=0; i<3; i++)
	{
		cout << n[i];
		if (i != 2) cout << " ";
	}
	cout << "\n";
	
	
	return 0;
}